#include <iostream>
#include <vector>

using namespace std;

int main()
{
	// 변수 입력
	int n, m;
	int i, j;

	// 바구니 수와 변경횟수를 입력
	cin >> n >> m;
	vector<int> basket(n);

	for (int x = 0; x < n; ++x) {
		basket[x] = x + 1;
	}

	//역순 출력
	for (int k = 0; k < m; k++) {
		cin >> i >> j;
		i--; j--; // 0-based 인덱스 보정
		while (i < j) {
			int tmp = basket[i];
			basket[i] = basket[j];
			basket[j] = tmp;

			i++;
			j--;
		}
	}

	// 바구니 순서 출력
	for (int x : basket) {
		cout << x << " ";
	}

	return 0;
}