// BaekJun 2475
// URL : https://www.acmicpc.net/problem/2475
// title : 검증수

#include <iostream>
#include <cmath>

using namespace std;

int main(void){
    int temp, total = 0;

    for(int i = 0 ; i < 5 ; ++i){
        cin >> temp;
        total += pow(temp,2);
    }
    
    int code = total % 10;

    cout << code;
}
