// BaekJun 2775
// Title : 부녀 회장이 될테야
// URL : https://www.acmicpc.net/problem/2775

#include <iostream>

using namespace std;

int main(void){

    int apartment[15][15] = {0};

    for(int i = 1 ; i < 15; ++i) apartment[0][i] = i;

    for(int i = 1 ; i < 15; ++i){
        for(int j = 1 ; j < 15 ; ++j){
            apartment[i][j] = apartment[i][j-1] + apartment[i-1][j];
        }
    }

    int T , k , n;

    cin >> T;

    for(int i = 0 ; i < T; ++i){
        cin >> k >> n;
        cout << apartment[k][n] << endl;
    }

}