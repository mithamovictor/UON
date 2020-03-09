#include <iostream>

using namespace std;

class UON_Election{
    int Main[4];// = {157, 203, 57, 315};
    int Chiromo[4];// = {200, 119, 103, 215};
    int Kabete_L[4];// = {147, 199, 117, 118};
    int Kabete_U[4];// = {221, 171, 171, 117};
    int Parklands[4];// = {111, 387, 181, 281};

    /**int total_votes, candidate_total_A = 0,candidate_total_B = 0,
    candidate_total_C = 0, candidate_total_D = 0, largest, second;
    float percentageA, percentageB, percentageC, percentageD;**/

public:
    void getMain();
    void getChiromo();
    void getKabete_L();
    void getKabete_U();
    void getParklands();

    void total_votes();
    void Result_A();
    void Result_B();
    void Result_C();
    void Result_D();

    void percentage_A();
    void percentage_B();
    void percentage_C();
    void percentage_D();

    void display_Main();
    void display_Chiromo();
    void display_Kabete_L();
    void display_Kabete_U();
    void display_Parklands();

    void winner();
};
    /*Methods for input*/
void UON_Election :: getMain(){
    cout << "Enter votes for Main Campus ";
    for(int i = 0; i < 4; i++){
        cin >> Main[i];
    }
}

void UON_Election :: getChiromo(){
    cout << "Enter votes for Chiromo Campus ";
    for(int i = 0; i < 4; i++){
        cin >> Chiromo[i];
    }
}

void UON_Election :: getKabete_L(){
    cout << "Enter votes for Lower Kabete Campus ";
    for(int i = 0; i < 4; i++){
        cin >> Kabete_L[i];
     }
}

void UON_Election :: getKabete_U(){
    cout << "Enter votes for Upper Kabete Campus ";
    for(int i = 0; i < 4; i++){
        cin >> Kabete_U[i];
    }
}

void UON_Election :: getParklands(){
    cout << "Enter votes for Parklands Campus ";
    for(int i = 0; i < 4; i++){
        cin >> Parklands[i];
    }
}
    /*Methods to output the results*/
void UON_Election :: display_Main(){
    cout << "Main        ";
    for(int x = 0; x < 4; x++){
        cout << "  " << Main[x];
    }
    cout << endl;
}

void UON_Election :: display_Chiromo(){
    cout << "Chiromo     ";
    for(int x = 0; x < 4; x++){
        cout << "  " << Chiromo[x];
    }
    cout << endl;
}

void UON_Election :: display_Kabete_L(){
    cout << "Kabete(L)   ";
    for(int x = 0; x < 4; x++){
        cout << "  " << Kabete_L[x];
    }
    cout << endl;
}

void UON_Election :: display_Kabete_U(){
    cout << "Kabete(U)   ";
    for(int x = 0; x < 4; x++){
        cout << "  " << Kabete_U[x];
    }
    cout << endl;
}

void UON_Election :: display_Parklands(){
    cout << "Parklands   ";
    for(int x = 0; x < 4; x++){
        cout << "  " << Parklands[x];
    }
    cout << endl;
}
    /*Methods for calculations for the votes*/
void UON_Election :: Result_A(){
    int total_A = Main[0] + Chiromo[0] + Kabete_L[0] + Kabete_U[0] + Parklands[0];
    cout << "Total for A: " << total_A << endl;
}

void UON_Election :: Result_B(){
    int total_B = Main[1] + Chiromo[1] + Kabete_L[1] + Kabete_U[1] + Parklands[1];
    cout << "Total for B: " << total_B << endl;
}

void UON_Election :: Result_C(){
    int total_C = Main[2] + Chiromo[2] + Kabete_L[2] + Kabete_U[2] + Parklands[2];
    cout << "Total for C: " << total_C << endl;
}

void UON_Election :: Result_D(){
    int total_D = Main[3] + Chiromo[3] + Kabete_L[3] + Kabete_U[3] + Parklands[3];
    cout << "Total for D: " << total_D << endl;
}
    /*total votes*/
void UON_Election :: total_votes(){
    int Total_votes, m, c, l, u, p;
    int total_Main = 0, total_Chiromo = 0, total_Kabete_L = 0,
    total_Kabete_U = 0, total_Parklands = 0;

    for(m = 0; m < 4; m++){
        total_Main += Main[m];
    }

    for(c = 0; c < 4; c++){
        total_Chiromo += Chiromo[c];
    }

    for(l = 0; l < 4; l++){
        total_Kabete_L += Kabete_L[l];
    }

    for(u = 0; u < 4; u++){
        total_Kabete_U += Kabete_U[u];
    }

    for(p = 0; p < 4; p++){
        total_Parklands += Parklands[p];
    }

    Total_votes = total_Main + total_Chiromo + total_Kabete_L + total_Kabete_U + total_Parklands;
    cout << "Total votes for all the campuses: " << Total_votes << endl;
}
    /*percentages*/
void UON_Election :: percentage_A(){
    float percentage;
    int Total_votes, Total_A, m, c, l, u, p;
    int total_Main = 0, total_Chiromo = 0, total_Kabete_L = 0,
    total_Kabete_U = 0, total_Parklands = 0;

    for(m = 0; m < 4; m++){
        total_Main += Main[m];
    }

    for(c = 0; c < 4; c++){
        total_Chiromo += Chiromo[c];
    }

    for(l = 0; l < 4; l++){
        total_Kabete_L += Kabete_L[l];
    }

    for(u = 0; u < 4; u++){
        total_Kabete_U += Kabete_U[u];
    }

    for(p = 0; p < 4; p++){
        total_Parklands += Parklands[p];
    }

    Total_votes = total_Main + total_Chiromo + total_Kabete_L + total_Kabete_U + total_Parklands;
    Total_A = Main[0] + Chiromo[0] + Kabete_L[0] + Kabete_U[0] + Parklands[0];
    percentage = (Total_A / (Total_votes * 1.00)) * 100;
    cout << "Percentage for A: " << percentage << endl;
}

void UON_Election :: percentage_B(){
    float percentage;
    int Total_votes, Total_B, m, c, l, u, p;
    int total_Main = 0, total_Chiromo = 0, total_Kabete_L = 0,
    total_Kabete_U = 0, total_Parklands = 0;

    for(m = 0; m < 4; m++){
        total_Main += Main[m];
    }

    for(c = 0; c < 4; c++){
        total_Chiromo += Chiromo[c];
    }

    for(l = 0; l < 4; l++){
        total_Kabete_L += Kabete_L[l];
    }

    for(u = 0; u < 4; u++){
        total_Kabete_U += Kabete_U[u];
    }

    for(p = 0; p < 4; p++){
        total_Parklands += Parklands[p];
    }

    Total_votes = total_Main + total_Chiromo + total_Kabete_L + total_Kabete_U + total_Parklands;
    Total_B = Main[1] + Chiromo[1] + Kabete_L[1] + Kabete_U[1] + Parklands[1];
    percentage = (Total_B / (Total_votes * 1.00)) * 100;
    cout << "Percentage for B: " << percentage << endl;
}

void UON_Election :: percentage_C(){
    float percentage;
    int Total_votes, Total_C, m, c, l, u, p;
    int total_Main = 0, total_Chiromo = 0, total_Kabete_L = 0,
    total_Kabete_U = 0, total_Parklands = 0;

    for(m = 0; m < 4; m++){
        total_Main += Main[m];
    }

    for(c = 0; c < 4; c++){
        total_Chiromo += Chiromo[c];
    }

    for(l = 0; l < 4; l++){
        total_Kabete_L += Kabete_L[l];
    }

    for(u = 0; u < 4; u++){
        total_Kabete_U += Kabete_U[u];
    }

    for(p = 0; p < 4; p++){
        total_Parklands += Parklands[p];
    }

    Total_votes = total_Main + total_Chiromo + total_Kabete_L + total_Kabete_U + total_Parklands;
    Total_C = Main[2] + Chiromo[2] + Kabete_L[2] + Kabete_U[2] + Parklands[2];
    percentage = (Total_C / (Total_votes * 1.00)) * 100;
    cout << "Percentage for C: " << percentage << endl;
}

void UON_Election :: percentage_D(){
    float percentage;
    int Total_votes, Total_D, m, c, l, u, p;
    int total_Main = 0, total_Chiromo = 0, total_Kabete_L = 0,
    total_Kabete_U = 0, total_Parklands = 0;

    for(m = 0; m < 4; m++){
        total_Main += Main[m];
    }

    for(c = 0; c < 4; c++){
        total_Chiromo += Chiromo[c];
    }

    for(l = 0; l < 4; l++){
        total_Kabete_L += Kabete_L[l];
    }

    for(u = 0; u < 4; u++){
        total_Kabete_U += Kabete_U[u];
    }

    for(p = 0; p < 4; p++){
        total_Parklands += Parklands[p];
    }

    Total_votes = total_Main + total_Chiromo + total_Kabete_L + total_Kabete_U + total_Parklands;
    Total_D = Main[3] + Chiromo[3] + Kabete_L[3] + Kabete_U[3] + Parklands[3];
    percentage = (Total_D / (Total_votes * 1.00)) * 100;
    cout << "Percentage for D: " << percentage << endl;
}
/*This section is to check for the winner and the second*/
void UON_Election :: winner(){
    float percentageA, percentageB, percentageC, percentageD;
    int Total_votes, Total_A, Total_B, Total_C, Total_D, m, c, l, u, p;
    int total_Main = 0, total_Chiromo = 0, total_Kabete_L = 0,
    total_Kabete_U = 0, total_Parklands = 0;

    for(m = 0; m < 4; m++){
        total_Main += Main[m];
    }

    for(c = 0; c < 4; c++){
        total_Chiromo += Chiromo[c];
    }

    for(l = 0; l < 4; l++){
        total_Kabete_L += Kabete_L[l];
    }

    for(u = 0; u < 4; u++){
        total_Kabete_U += Kabete_U[u];
    }

    for(p = 0; p < 4; p++){
        total_Parklands += Parklands[p];
    }

    Total_votes = total_Main + total_Chiromo + total_Kabete_L + total_Kabete_U + total_Parklands;
    Total_A = Main[0] + Chiromo[0] + Kabete_L[0] + Kabete_U[0] + Parklands[0];
    Total_B = Main[1] + Chiromo[1] + Kabete_L[1] + Kabete_U[1] + Parklands[1];
    Total_C = Main[2] + Chiromo[2] + Kabete_L[2] + Kabete_U[2] + Parklands[2];
    Total_D = Main[3] + Chiromo[3] + Kabete_L[3] + Kabete_U[3] + Parklands[3];

    percentageA = (Total_A / (Total_votes * 1.00)) * 100;
    percentageB = (Total_B / (Total_votes * 1.00)) * 100;
    percentageC = (Total_C / (Total_votes * 1.00)) * 100;
    percentageD = (Total_D / (Total_votes * 1.00)) * 100;
    /*cout << "Percentage for D: " << percentage << endl;*/

    if(percentageA >= 50.00){
        cout << "Candidate A is the winner" << endl;
    }else if(percentageB >= 50.00){
        cout << "Candidate B is the winner" << endl;
    }else if(percentageC >= 50.00){
        cout << "Candidate C is the winner" << endl;
    }else if(percentageD >= 50.00){
        cout << "Candidate D is the winner" << endl;
    }else{
        cout << "No candidate has reached 50.00% of the total votes cast in the election" << endl;
    }

    float x[4] = {percentageA, percentageB, percentageC, percentageD};
    int largest, second;
    for(int i = 0; i < 4; i++){
        if(x[0] < x[1]){
            largest = x[1];
            second = x[0];
        }else{
            largest = x[0];
            second = x[1];
        }
        for(int j = 0; j < 4; j++){
            if(x[i] > largest){
                second = largest;
                largest = x[i];
            }else if (x[i] > second && x[i] != largest) {
                 second = x[i];
              }
        }
    }
    cout << "The highest is: " << largest << endl;
    cout << "Second Highest is: " << second << endl;
}

int main(){
    UON_Election election;
    /*float percentage_A, percentage_B, percentage_C, percentage_D;*/

    election.getMain();
    election.getChiromo();
    election.getKabete_L();
    election.getKabete_U();
    election.getParklands();

    cout << "\n\n\t\tCandidates" << endl;
    cout << "Campus        A   B   C   D" << endl;
    election.display_Main();
    election.display_Chiromo();
    election.display_Kabete_L();
    election.display_Kabete_U();
    election.display_Parklands();

    cout << "\n" << endl;
    election.Result_A();
    election.Result_B();
    election.Result_C();
    election.Result_D();
    election.total_votes();

    cout << "\n" << endl;
    election.percentage_A();
    election.percentage_B();
    election.percentage_C();
    election.percentage_D();

    cout << "\n" << endl;
    election.winner();


    return 0;
}
