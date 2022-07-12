#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(void){
    string A,B;
    bool up = false;
    vector<int> SumAB;
    cin >> A >> B;

    reverse(A.begin() , A.end());
    
    reverse(B.begin() , B.end());

    if(B.size() < A.size()){
        for(int i = 0 ; i < B.size(); ++i){
            int sum = A[i]-'0' + B[i]-'0';
            if(up){ sum += 1;up=false;}
            if(sum > 9) up = true;
            SumAB.push_back(sum % 10);
            
        }

        for(int i = 0 ; i < A.size() - B.size(); ++i){
            int sum = A[B.size()+i] -'0';
            if(up){ sum+=1;up=false;}
            if(sum > 9) up = true;
            SumAB.push_back(sum % 10);
        }
    }
    else{
        for(int i = 0 ; i < A.size(); ++i){
            int sum = A[i]-'0' + B[i]-'0';
            if(up){ sum += 1;up = false;}
            if(sum > 9) up = true;
            SumAB.push_back(sum % 10);
        }

        for(int i = 0 ; i < B.size() - A.size(); ++i){
            int sum = B[A.size()+i]-'0';
            if(up){ sum+=1;up =false;}
            if(sum > 9) up = true;
            SumAB.push_back(sum % 10);
        }
    }
    if(up) SumAB.push_back(1);
    
    reverse(SumAB.begin(),SumAB.end());

    for(int i = 0 ; i < SumAB.size() ; ++i) cout << SumAB[i];



}