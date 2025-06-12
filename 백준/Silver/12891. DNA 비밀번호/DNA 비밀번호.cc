// DNA 비밀번호
#include <iostream>
#include <string>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	string dna;
	int s, p, passwordNum = 0;
	cin >> s >> p;
	cin >> dna;

	int acgt[4] = {};
	for (int i = 0; i < 4; i++) {
		cin >> acgt[i];
	}
	
	int count[4] = { 0 };

	for (int i = 0; i < p; i++) {
		if (dna[i] == 'A')
			count[0]++;
		else if (dna[i] == 'C')
			count[1]++;
		else if (dna[i] == 'G')
			count[2]++;
		else if (dna[i] == 'T')
			count[3]++;
	}

	if (acgt[0] <= count[0]
		&& acgt[1] <= count[1]
		&& acgt[2] <= count[2]
		&& acgt[3] <= count[3]) {
		passwordNum++;
	}

	for (int i = p; i < s; i++) {
		if (dna[i-p] == 'A')
			count[0]--;
		else if (dna[i-p] == 'C')
			count[1]--;
		else if (dna[i-p] == 'G')
			count[2]--;
		else if (dna[i-p] == 'T')
			count[3]--;

		if (dna[i] == 'A')
			count[0]++;
		else if (dna[i] == 'C')
			count[1]++;
		else if (dna[i] == 'G')
			count[2]++;
		else if (dna[i] == 'T')
			count[3]++;

		if (acgt[0] <= count[0]
			&& acgt[1] <= count[1]
			&& acgt[2] <= count[2]
			&& acgt[3] <= count[3]) {
			passwordNum++;
		}
	}

	cout << passwordNum << '\n';
	return 0;
}