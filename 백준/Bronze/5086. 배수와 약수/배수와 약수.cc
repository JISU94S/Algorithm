#include <iostream>
using namespace std;

int main() {
	int num1, num2;
	
	while (true) {
		cin >> num1 >> num2;
		if(num1 == 0 && num2 == 0) break;
		else if (num2 % num1 == 0){
			cout << "factor" << '\n';
			continue;
		}
		else if (num1 % num2 == 0) {
			cout << "multiple" << '\n';
			continue;
		}
		else {
			cout << "neither" << '\n';
			continue;
		}
	}

	return 0;
}