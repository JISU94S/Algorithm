#include <iostream>
using namespace std;

// 진법 변환의 원리
//	- 자리값을 활용한 가중치 합산.
//	- 숫자의 각 자리 값에 진법(B)의 거듭제곱을 곱해서 더하는 과정.
//핵심 아이디어	
//	- 기존 숫자에 B를 곱한 후, 새로운 자리값을 더하는 과정이 반복되는 것.
//	- Horner's Method(호너의 방법)

int main()
{
	// 변수 선언, 숫자, 진법, 숫자길이
	string num;
	int base;
	long long result = 0;

	// 숫자, 진법 입력
	cin >> num >> base;
	
	// 기존 숫자에 B를 곱한 후, 새로운 자리값을 더하는 과정을 반복.
	for (char digit : num)
	{
		int value = (digit >= 'A') ? (digit - 'A' + 10) : (digit - '0');
		result = result * base + value;
	}

	// 최종 변환된 값 출력
	cout << result << endl;

	return 0;
}