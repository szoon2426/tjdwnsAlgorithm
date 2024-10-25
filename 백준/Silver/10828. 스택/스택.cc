#include <iostream>
#include <stack>
using namespace std;
int main() {
	stack<int> stk;
	int times;
	cin >> times;
	for (int i = 0; i < times; i++) {
		string ord;
		cin >> ord;
		if (ord == "push") {
			int n;
			cin >> n;
			stk.push(n);
		}
		else if (ord == "pop") {
			if (stk.empty()) { cout << -1 << endl; }
			else {
				cout << stk.top() << endl; stk.pop();
			}
		}
		else if (ord == "size") {
			if (stk.empty()) { cout << 0 << endl; }
			else { cout << stk.size() << endl; }
		}
		else if (ord == "empty") {
			if (stk.empty()) { cout << 1 << endl; }
			else { cout << 0 << endl; }
		}
		else if (ord == "top") {
			if (stk.empty()) { cout << -1 << endl; }
			else { cout << stk.top() << endl; }
		}
	}
}