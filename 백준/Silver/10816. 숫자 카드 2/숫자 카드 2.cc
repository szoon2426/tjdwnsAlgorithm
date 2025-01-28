#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
#include "math.h"

using namespace std;

int main() {
    int n;
    cin >> n;
    map<int, int> m;
    vector<int> answer;
    for (int i = 0; i < n; i++) {
        int a;
        cin >> a;
        answer.push_back(a);
    }
    sort(answer.begin(),answer.end());
    int tmp = answer[0];
    int cnt = 1;
    for (int i = 1; i < n; i++) {
        if (answer[i] == tmp) {
            cnt++;
        }
        else {
            m.insert({ tmp, cnt });
            cnt = 1;
            tmp = answer[i];
        }
    }
    m.insert({ answer.back(), cnt });
    answer.clear();
    cin >> n;
    for (int i = 0; i < n; i++) {
        int a;
        cin >> a;
        if (m.find(a) == m.end()) {
            answer.push_back(0);
        }
        else {
            answer.push_back(m.find(a)->second);
        }
    }
    for (int i = 0; i < n; i++) {
        cout << answer[i] << ' ';
    }
}