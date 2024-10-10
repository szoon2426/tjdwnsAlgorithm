#include <iostream>
#include <vector>
using namespace std;

vector<vector<int>> map(1);
int maxRawSize, maxColSize;

class Problem {
public:
	int raw;
	int col;
	Problem(int a, int b) {
		raw = max(a,b);
		col = min(a,b);
		if (raw > maxRawSize) {
			maxRawSize = raw;
		}
		if (col > maxColSize) {
			maxColSize = col;
		}
	}
};

//vector<int> intArr;
//void sort(int a) {//수 정렬하기 2
//	if (intArr.empty()) {
//		intArr.push_back(a);
//		//cout << intArr[0];
//	}
//	else {
//		int j = a;
//		for (int i = 0; i < intArr.size(); i++) {
//			if (intArr[i] <= j) {
//				//cout << "input이 더 클 때 ";
//				if (i == intArr.size() - 1) { intArr.push_back(j); break; }
//			}			
//			else if(intArr[i] > j) { //intArr[i] > a
//				//cout << "input이 더 작을 때 ";
//				int temp = j;
//				j = intArr[i];
//				intArr[i] = temp;
//			}
//		}
//		if (j != a) {
//			intArr.push_back(j);
//		}
//		/*cout << "input이 " << a << "일때";
//		for (int i = 0; i < intArr.size(); i++) {
//			cout << intArr[i] << " ";
//		}
//		cout << endl;*/
//	}
//}
int main() {
	//int times;
	//cin >> times;
	//for (int i = 0; i < times; i++) {
	//	int a;
	//	cin >> a;
	//	sort(a);
	//}
	////cout << "출력: ";
	//for (int i = 0; i < intArr.size(); i++) {
	//	cout << intArr[i] << endl;
	//}
	int caseNum;
	cin >> caseNum;

	map[0].push_back(1);
	vector<Problem> p;
	for (int i = 0; i < caseNum; i++) {
		int n, k;
		cin >> n >> k;
		p.push_back(Problem(n, k));
	}

	for (int j = 1; j <= maxRawSize; j++) {
		for (int a = 0; a <= j; a++) {
			vector<int> raw;
			if (a == 0) { raw.push_back(1); map.push_back(raw); continue; }
			int data = map[j - 1][a - 1];
			if (a < j) { data += map[j - 1][a]; }
			map[j].push_back(data);
		}
	}
	for (int i = 0; i < p.size(); i++) {
		cout << map[p[i].raw][p[i].col] << endl;
	}
}