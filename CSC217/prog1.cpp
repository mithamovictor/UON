#include <iostream>
using namespace std;

int main() {
	char campus[5][20] = {"Main", "Chiromo", "Kabete (L)", "Kabete (U)", "Parklands"};
	char cand[4][5] = {"A", "B", "C", "D"};
	int i=0, k=0;
	int results[4], temp[4];
	int perc[4];
	int total = 0;

	do {
		int j = 0, sub_total = 0; 

		cout << "Enter the results for candidate ";
		cout << cand[i];
		cout << "\n";

		do {
			cout << campus[j];
			cout << " campus:: ";
			cin >> results[j];

			sub_total += results[j];
		
			j++;
		} while ( j < 5 );
		
		temp[i] = sub_total;
		
		total += sub_total;
		
		i++;
	} while ( i < 4 );
		
	do {
		int l = 0;
		perc[k] = ((temp[k]*100)/total);
		cout << perc[k];
		cout << "%\n";
		
		if (perc[k] >= 50 ) {
			cout << "Won!";
			cout << "\n";
			
			do {
				if ( perc[l] == perc[k] ) {
					cout << "Rerun";
					cout << "\n";
				}
				
				l++;
				
			} while ( l < 4 );
			
		} else {
			cout << "Lost!";
			cout << "\n";
		
			do {
				
				if ( perc[l] == perc[k] ) {
					cout << "Rerun";
					cout << "\n";
				}
				
				l++;
				
			} while ( l < 4 );
		}
		
		do {
			if ( perc[l] == perc[k] ) {
				cout << "Rerun";
				cout << "\n";
				
			}
		} while ( l < 4 );
		
		k++;
	} while ( k < 4 );
  
	return 0;
}

