#include <iostream>
using namespace std;
int main() {
    int n;
	cin >> n;
	int maxF;
	maxF = n / 5;
	
	int answer = -1;
	for (int i = maxF; i >= 0 ; i--) {
		int a = n - i * 5;
		if (a % 3 != 0) {
			continue;
		}
		else {
			if (answer == -1) { answer = i + a / 3; }
			else { answer = min(i + a / 3, answer); }
		}
	}
	cout << answer;
}