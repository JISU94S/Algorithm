#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int n;
	int min = 1000001, max = -1000001;

	cin >> n;
	vector<int> num(n);

	for(int i = 0; i < n; i++) {
		cin >> num[i];
		if (num[i] < min) min = num[i];
		if (num[i] > max) max = num[i];
	}

	cout << min << " " << max << '\n';

	return 0;
}