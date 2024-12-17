#include <iostream>
using namespace std;

int main()
{
	long N;
	cin >> N;
	long tmp_f = N / 5;
	if (N % 5 == 0) { cout << tmp_f; return 0; }
	while (true) {
		if (tmp_f < 0) { cout << -1; break; }
		long tmp_t = (N - tmp_f * 5) / 3;
		if ((N - tmp_f * 5)% 3 == 0) {
			cout << tmp_f + tmp_t; break;
		}
		else { tmp_f--; }
	}
	return 0;
}