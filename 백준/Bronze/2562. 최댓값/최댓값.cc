#include <iostream>
#include <vector>

using namespace std;

int main() {
	int max = 0, cnt = 0;
	vector<int> num(9);

	for (int i = 0; i < 9; i++) {
		cin >> num[i];
		if (num[i] > max) {
			max = num[i];
			cnt = i+1;
		}
	}

	// 최대값과 최대값이 몇 번째 수인지 출력
	cout << max << '\n' << cnt << '\n';

	return 0;
}