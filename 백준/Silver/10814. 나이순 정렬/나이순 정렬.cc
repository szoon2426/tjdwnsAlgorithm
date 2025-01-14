#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool compare(pair<pair<int, string>, int> a, pair<pair<int, string>, int> b) {
	if (a.first.first == b.first.first) {
		return a.second<b.second;
	}
	else {
		return a.first.first < b.first.first;
	}
		
}

int main() {
	int n;
	cin >> n;
	vector<pair<pair<int, string>,int>> v;
	for (int i = 0; i < n; i++) {
		int a;
		string b;
		cin >> a >> b;
		v.push_back({{ a,b }, i});
	}
	sort(v.begin(), v.end(), compare);
	for (int i = 0; i < v.size(); i++) {
		cout << v[i].first.first << ' ' << v[i].first.second << '\n';
	}
}