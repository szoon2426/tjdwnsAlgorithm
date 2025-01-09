#include <iostream> 
#include <vector>
#include <queue>
using namespace std;

int width, height;
vector<string> map;

int main(){
	cin >> height >> width;
	vector<int> w(width);
	vector<vector<int>> answer;
	for (int i = 0; i < height; i++) {
		answer.push_back(w);
	}
	for (int i = 0; i < height; i++) {
		string k;
		cin >> k;
		map.push_back(k);
	}
	queue<pair<int,int>> q;
	q.push({ 0,0 });
	answer[0][0] = 1;
	while (!q.empty()) {			//1을 계속 찾으니까 무한 루프를 돕니다. 쉬불 이거 고쳐야 해용 예상 1: answer값 비교해서 작으면 돌리기로 하죠? 아닌가? 일단 ㅇㅇ;
		int x, y;
		x = q.front().first;
		y = q.front().second;
		q.pop();
		if (x < height - 1) {
			if (map[x + 1][y] == '1') { 
				if (answer[x + 1][y] == 0 || answer[x + 1][y] > answer[x][y] + 1) {
					q.push({ x + 1,y });
					answer[x + 1][y] = answer[x][y] + 1;
				}
			}
		}
		if (x > 0) {
			if (map[x - 1][y] == '1') { 
				if (answer[x - 1][y] == 0 || answer[x - 1][y] > answer[x][y] + 1) {
					q.push({ x - 1, y });
					answer[x - 1][y] = answer[x][y] + 1;
				}
			}
		}
		if (y < width - 1) {
			if (map[x][y + 1] == '1') {
				if (answer[x][y + 1] == 0 || answer[x][y + 1] > answer[x][y] + 1) {
					q.push({ x,y + 1 });
					answer[x][y + 1] = answer[x][y] + 1;
				}
			}
		}
		if (y > 0) {
			if (map[x][y - 1] == '1') { 
				if (answer[x][y - 1] == 0 || answer[x][y - 1] > answer[x][y] + 1) {
					q.push({ x,y - 1 });
					answer[x][y - 1] = answer[x][y] + 1;
				}
			}
		}
	}
	cout << answer[height-1][width-1];
}