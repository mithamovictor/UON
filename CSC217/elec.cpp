#include <iostream>
#include <iomanip>
#include <string>

using namespace std;


#define N 5

char names[N][20];
char campus[5][20] = {"Main", "Chiromo", "Kabete (L)", "Kabete (U)", "Parklands"};
char cand[4][5] = {"A", "B", "C", "D"};
float votes[N];
float totalVotes = 0;
int winnerPos;  
float winnerVotes;
float percentageVotes[N];

void get_input()
{
	int i;
	for (i=0;i<N;i++)
	{ 
		cout << "Results for " << campus[i] << " campus" << endl;
		for ( int j=0; j<4; j++ ) 
		{
			cout << "Enter votes for candidate " << cand[j] << endl;
			cin >> votes[i];
			totalVotes += votes[i];  
		}
	}
}

void calculate_winner()
{
	int i;
	winnerPos = 0;
	winnerVotes = votes[0];

	for (i=1;i<N;i++)
	{
		if ( winnerVotes < votes[i] )
		{
			winnerPos = i;
			winnerVotes = votes[i];
		}
	}
}

void calculate_Percentage_Of_Every_Candidate()
{
	int i;
	for (i=0; i<N ; i++)
	{
		percentageVotes[i] = ((100/totalVotes) * votes[i]);
	}
}

void show_output()
{
	cout << setprecision(2) << fixed << showpoint << endl;
	int i;
	cout << "Candidate" << "  " << "Total Votes Received" << "   " << "Percentage Votes." << endl;
	for ( i = 0; i < 4; i++ )
	{
		cout << cand[i] << "\t\t" << votes[i] << "\t\t" << percentageVotes[i] << endl;
		cout << endl;
	}
	cout << "Winner of the election: " << cand[winnerPos];
}

int main()
{
	get_input();
	calculate_winner();
	calculate_Percentage_Of_Every_Candidate();
	show_output();
	return 0;
}
