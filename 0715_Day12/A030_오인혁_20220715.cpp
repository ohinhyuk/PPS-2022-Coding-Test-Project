#include <iostream>

using namespace std;

int main(void){

    int N , feeling;
    float percent[4];

    float good;
    
    cin >> N >> feeling;
    for(int i = 0 ; i < 4 ; ++i) cin >> percent[i];

    if(N == 1){
        if(feeling == 0) cout << percent[0] * 1000 << "\n" << 1000 - percent[0] * 1000;
        else cout << percent[2] * 1000 << "\n" << 1000 - percent[2]*1000;
    }
    else{
        if(feeling == 0){ good = (percent[0] * percent[0] + percent[1] * percent[2])* 1000 ; cout << good << '\n' << 1000-good ;}
        else {good = (percent[3] * percent[2] + percent[2] * percent[0] )* 1000; cout << good << '\n' << 1000-good ;}
    }
}