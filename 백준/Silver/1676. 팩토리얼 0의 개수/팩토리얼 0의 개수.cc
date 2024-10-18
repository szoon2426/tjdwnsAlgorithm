#include <iostream>
using namespace std;

int main() {
	int num;
	cin >> num;

	int two = 0, five=0;
	for (int i = num; i >0; i--) {
		int a = i;
		while (true) {
			bool did = false;
			if (a % 2 == 0) {
				two++;
				a /= 2;
				did = true;
			}
			if (a % 5 == 0) {
				five++;
				a /= 5;
				did = true;
			}
			if (!did) {
				break;
			}
		}
	}
	cout << min(two, five);

}