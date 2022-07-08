// BeakJun 1026
// Title : 보물
// URL : https://www.acmicpc.net/problem/1026

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(void){
    int N , temp;
    cin >> N;

    vector<int> A;
    vector<int> B;
    
    
    for(int i = 0 ; i < N ; ++i){
        cin >> temp;
        A.push_back(temp);
    }
    
    for(int i = 0 ; i < N ; ++i){
        cin >> temp;
        B.push_back(temp);
    }

    sort(A.begin() , A.end());
    sort(B.rbegin(),B.rend());
    
    int total = 0;
    for(int i = 0 ; i < A.size() ; ++i){
        total += A[i] * B[i];
    }
        
    cout << total;

}