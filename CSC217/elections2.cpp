#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

#define N 5

class Elections 
{
	private:
    	char campus[N][20] = { "Main", "Chiromo", "Kabete (L)", "Kabete (U)", "Parklands" };
    	char cand[4][5] = { "A", "B", "C", "D" };
    	float votes[N];
    	float total_votes = 0;
    	float single_tot[4];
    	int win_pos;
    	float win_votes;
    	float perc_votes[4];
        
    public:
        void get_input();
        void calc_winner();
        void calc_perc_per_cand();
        void output_res();
};

void Elections::get_input()
{
    int j = 0; // Declare the counter variable

    do 
    {	
        cout << "Enter votes for candidate " << cand[j] << endl;
            
        int i = 0;

        do
        {
            cout << "Results for " << campus[i] << " campus:: ";
            cin >> votes[i];
            total_votes += votes[i];
            single_tot[j] += votes[i];

            i++;
        } while(i<N);
        j++;
    } while(j<4);
}

void Elections::calc_winner()
{
    int i;
    win_pos = 0;
    win_votes = single_tot[0];

    do
    {
        if ( win_votes < single_tot[i] )
        {
            win_pos = i;
            win_votes = single_tot[i];
        }
        i++;
    } while (i<4);
    cout << endl;
}

void Elections::calc_perc_per_cand()
{
    int i = 0;

    do
    {
        perc_votes[i] = ((100/total_votes) * single_tot[i]);
        i++;
    } while (i<4);
}

void Elections::output_res()
{
    cout << setprecision(2) << fixed << showpoint << endl;
    int i = 0, j = 0, count = 0;

    cout << "-----------------------------------------------------------------" << endl;
    cout << "Candidate" << "\t|\t" << "Total" << "\t\t|\t" << "Percentage" << "\t|" << endl;
    cout << "-----------------------------------------------------------------" << endl;
    do
    {
        cout << "  " << cand[i] << "\t\t|\t" << single_tot[i] << "\t\t|\t" << perc_votes[i] << "%" << "\t\t|" << endl;
        i++;
    } while (i<4);
    
    cout << "-----------------------------------------------------------------" << endl;
    cout << endl;

    do
    {
        if ( single_tot[win_pos] == single_tot[j] )
        {
            cout << cand[j] << " is a winner." << endl;
            count++;
        }
        j++;
    } while (j<4);
    
    cout << endl;
    

    if ( count > 1 ) 
    {
        cout << "There was a tie. There will be a runoff." << endl;
    }
}

int main()
{
    Elections elections;
	elections.get_input();
    elections.calc_winner();
    elections.calc_perc_per_cand();
    elections.output_res();
	
	return 0;
}

