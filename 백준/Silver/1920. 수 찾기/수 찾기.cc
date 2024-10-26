#include <iostream>
#include <vector>
#include <algorithm>
#include <stack>
using namespace std;

vector<int> vec;
bool binarySearch(int a, int high, int low) {
	int mid = (high + low) / 2;
	if (high - low <= 256) {
		for (int i = low; i <= high; i++) {
			if (a == vec[i]) {
				return true;
			}
		}
		return false;
	}
	else {
		if (a > vec[mid]) {
			return binarySearch(a, high, mid + 1);
			//low = mid + 1;
			//mid = (high + low) / 2;
		}
		else if (a < vec[mid]) {
			return binarySearch(a, mid - 1, low);
			//high = mid - 1;
			//mid = (high + low) / 2;
		}
		else if (a == vec[mid]) {
			return true;
		}
	}
}
bool compare(int a, int b) {
	return a < b;
}
int main() {
	int n, m;
	cin >> n;
	for (int i = 0; i < n; i++) {
		int a;
		cin >> a;
		vec.push_back(a);
	}
	sort(vec.begin(), vec.end(), compare);
	cin >> m;
	vector<int> answer;
	for (int i = 0; i < m; i++) {
		int a;
		cin >> a;
		if (binarySearch(a, vec.size() - 1, 0)) { answer.push_back(1); }
		else if (!binarySearch(a, vec.size() - 1, 0)) { answer.push_back(0); }
	}
	for (int i = 0; i < answer.size(); i++) {
		cout << answer[i] << '\n';
	}
}