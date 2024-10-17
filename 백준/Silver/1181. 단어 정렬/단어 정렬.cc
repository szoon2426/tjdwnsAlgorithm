#include <iostream>
#include <vector>
using namespace std;
vector<string> dict;

void dictSort(int start, int end) {
	if (start >= end) { return; }
	int pivotPoint;
	int i, j;
	string pivotitem;

	pivotitem = dict[start];
	j = start;
	for (i = start + 1; i <= end; i++) {
		if (dict[i].size() < pivotitem.size()) {
			j++;
			string a = dict[j];
			dict[j] = dict[i];
			dict[i] = a;
		}
		else if (dict[i].size() == pivotitem.size()) {
			if (dict[i] < pivotitem) {
				j++;
				string a = dict[j];
				dict[j] = dict[i];
				dict[i] = a;
			}else if(dict[i] == pivotitem){
                dict[i] = "";
            }
		}
	}
	pivotPoint = j;
	string a = dict[pivotPoint];
	dict[pivotPoint] = dict[start];
	dict[start] = a;
	dictSort(start, pivotPoint - 1);
	dictSort(pivotPoint + 1, end);
}
int main() {
	int times = 5;
	cin >> times;
	for (int i = 0; i < times; i++) {
		string a;
		cin >> a;
		dict.push_back(a);
	}
	dictSort(0, dict.size() - 1);
	for (int i = 0; i < dict.size(); i++) {
        if(dict[i] == "") {continue;}
		cout << dict[i] << endl;
	}

}