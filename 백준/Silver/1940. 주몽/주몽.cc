//주몽 / 오답
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	int N, M, num, sum = 0, count = 0;
	cin >> N >> M;

	vector<int> meterial;
	for (int i = 0; i < N; i++) {
		cin >> num;
		meterial.push_back(num);
	}

	sort(meterial.begin(), meterial.end());
	
	int start = 0;
	int end = N - 1;
	while (end > start) {
		sum = meterial[start] + meterial[end];
		if (sum < M) {
			start++;
		}
		else if (sum > M) {
			end--;
		}
		else {
			count++;
			start++;
		}
	}
	
	//만들 수 있는 갯수 출력
	cout << count;
	return 0;
}