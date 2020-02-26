#include <iostream>
using namespace std;

int main() {
	char campus[5][20] = {"Main", "Chiromo", "Kabete (L)", "Kabete (U)", "Parklands"};
	char cand[4][5] = {"A", "B", "C", "D"};
	int i=0, k=0;
	float results[4], temp[4];
	float perc[4];
	float total = 0;
	
	cout << cand[0] << endl;

	do {
		int j = 0, sub_total = 0; 

		cout << "Enter the results for candidate " << cand[i] << endl;

		do {
			cout << campus[j] << " campus:: ";
			cin >> results[j];

			sub_total += results[j];
		
			j++;
		} while ( j < 5 );
		
		temp[i] = sub_total;
		
		total += sub_total;
		
		i++;
	} while ( i < 4 );
		
//	do {
//		int l = 0;
//		perc[k] = ((temp[k]*100)/total);
//		
//		k++;
//	} while ( k < 4 );
	
	
	cout << "Candidate" << "\t\t" << "Total Votes" << "\t\t" << "Percentage" << endl;
	cout << " " << cand[0] << "\t\t\t  " << temp[0] << "\t\t\t" << perc[0] << "%\n" << endl;
	cout << " " << cand[1] << "\t\t\t  " << temp[1] << "\t\t\t" << perc[1] << "%\n" << endl;
	cout << " " << cand[2] << "\t\t\t  " << temp[2] << "\t\t\t" << perc[2] << "%\n" << endl;
	cout << " " << cand[3] << "\t\t\t  " << temp[3] << "\t\t\t" << perc[3] << "%\n" << endl;
  
	return 0;
}

