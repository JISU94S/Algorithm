#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main()
{	
	// 변수 설정
	string subject[20], grade[20];
	double credit[20] = { 0.0 };
	double total_credit = 0.0;

	double score[20] = { 0.0 };
	double final_score[20] = { 0.0 };
	
	double total_score = 0.0;
	double average = 0.0;

	//과목명, 학점, 등급 입력 - 20줄 이상.
	for (int i = 0; i < 20; i++) {
		cin >> subject[i] >> credit[i] >> grade[i];

		if (grade[i] == "A+") score[i] = 4.5;
		else if (grade[i] == "A0") score[i] = 4.0;
		else if (grade[i] == "B+")  score[i] = 3.5;
		else if (grade[i] == "B0")  score[i] = 3.0;
		else if (grade[i] == "C+")  score[i] = 2.5;
		else if (grade[i] == "C0")  score[i] = 2.0;
		else if (grade[i] == "D+")  score[i] = 1.5;
		else if (grade[i] == "D0")  score[i] = 1.0;
		else if (grade[i] == "F") score[i] = 0.0;
		else if (grade[i] == "P") continue;

		final_score[i] = credit[i] * score[i];
		total_score += final_score[i];
		total_credit += credit[i];
	}
	//전공평점 = 전공과목별(학점 * 과목평점)의 합을 학점의 총합으로 나눈 값.
	average = total_score / total_credit;

	//전공평점 출력
	cout << fixed << setprecision(6) << average << '\n';

	return 0;
}