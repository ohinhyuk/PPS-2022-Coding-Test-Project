// BeakJun 17210
// Title : 문문문
// URL : https://www.acmicpc.net/problem/17210

#include <iostream>

using namespace std;

int main(){
    int N , first;
    
    cin >> N >> first;

    if( N > 5 ) cout << "Love is open door";
    else{ 
        for(int i = 0 ; i < N-1 ; ++i){
            if(first == 1){
                cout << 0 << endl;
                first = 0;
            }
            else{
                cout << 1 << endl; 
                first = 1;
            }
        }
    }
}