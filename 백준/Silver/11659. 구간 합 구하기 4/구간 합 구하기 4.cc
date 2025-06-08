//구간 합 구하기4 / 시간 초과
#include <iostream>
#include <vector>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int N, M, num, sum = 0;
	int i, j;

	cin >> N >> M;
	
	vector<int> vec;
	for (int k = 0; k < N; k++) {
		cin >> num;
		vec.push_back(num);
	}

	vector<int> prefix_sums(N+1);
	for (int k = 1; k < N + 1; k++)
	{
		prefix_sums[k] = prefix_sums[k - 1] + vec[k - 1];
	}
	
	for (int k = 0; k < M; k++) {
		cin >> i >> j;
		cout << prefix_sums[j] - prefix_sums[i-1] << '\n';
	}

	/*
	for(i = 0; i < )
	sum[i] = sum[i - 1] + vec[i];

	vec[j] - vec[i];


	for (int k = 0; k < M; k++) {
		cin >> i >> j;
		for (int l = i; l < j + 1; l++) {
			sum += vec[l-1];
		}
		result_sums.push_back(sum);
		sum = 0;
	}

	for (int val : result_sums) {
		cout << val << "\n";
	}
	*/

	return 0;
}