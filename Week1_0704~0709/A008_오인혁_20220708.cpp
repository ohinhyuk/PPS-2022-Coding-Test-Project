#include <iostream>
#include <iomanip>
using namespace std;

int main(int argc , char** argv){

    // cin.tie(NULL); cout.tie(NULL);
    // ios_base::sync_with_stdio(false);

    int N_1;
    cin >> N_1;

    int N_2 , temp;
    for(int i = 0 ; i < N_1 ; ++i){
        int total = 0;
        int avr_up = 0;

        cin >> N_2;
        int score [N_2];
        for(int j = 0 ; j < N_2 ; ++j){
            cin >> temp;

            score[j] = temp;
            total += temp;
        }

        total /= N_2;
        for(int j = 0 ; j < N_2 ; ++j) if(score[j] > total) avr_up++;
        
        cout.setf(ios::showpoint);
        cout<<fixed;
        cout.precision(3);
        cout << float(avr_up) / N_2 * 100 << "%\n";

    }


}