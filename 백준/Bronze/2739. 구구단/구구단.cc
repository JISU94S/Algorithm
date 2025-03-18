#include <iostream>
using namespace std;

int main()
{
	int n = 0;
	
	//숫자 입력
	cin >> n;

	//구구단 출력
	for (int i = 1; i < 10; i++) {
		cout << n << " * " << i << " = " << n * i << endl;
	}
	return 0;
}