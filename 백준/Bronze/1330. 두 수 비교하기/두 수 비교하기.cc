#include <iostream>
using namespace std;

int main()
{
	//두 수 입력받기
	int num1, num2;

	cin >> num1;
	cin >> num2;

	//두 수 비교 후 결과 출력하기
	if (num1 > num2) {
		cout << '>' << endl;
	}
	else if (num1 < num2) {
		cout << '<' << endl;
	}
	else {
		cout << "==" << endl;
	}

	return 0;
}