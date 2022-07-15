// BaekJun 2953
// Title : 나는 요리사다
// URL : https://www.acmicpc.net/problem/2953

#include <iostream>

using namespace std;

int main(){
    
    int winner[2]={0};

    int temp,total;

    for(int i = 1 ; i <= 5 ; ++i){
        total = 0;
        for(int j = 0 ; j < 4 ; ++j){
            cin >> temp;
            total += temp;
        }

        if(total > winner[1]){
            winner[1] = total;
            winner[0] = i;
        }

    }

    cout << winner[0] << " " << winner[1] ;
}