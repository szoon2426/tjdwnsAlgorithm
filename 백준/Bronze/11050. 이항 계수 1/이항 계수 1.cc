#include <iostream>
#include <vector>
using namespace std;

int main() {
	int N, K;
	cin >> N >> K;
	if (K > N / 2) {
		K = N - K;
	}
	vector<vector<int>> map(1);
	vector<int> start;
	start.push_back(1);
	map[0].push_back(1);
	for (int i = 1; i <= N; i++) {
		for (int j = 0; j <= i; j++) {
			if (j > K) { break; }
			if (j == 0) { map.push_back(start); }
			else {
				int formalNum;
				if (j> map[i-1].size()-1) {
					formalNum = 0;
				}
				else {
					formalNum = map[i - 1][j];
				}
				int n = map[i - 1][j - 1] + formalNum;
				map[i].push_back(n);
			}
		}
	}
	cout << map.back().back();
}
	
