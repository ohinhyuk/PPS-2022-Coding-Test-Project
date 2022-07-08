// BeakJun 1475
// Title : room number
// URL : https://www.acmicpc.net/problem/1475

#include <iostream>
#include <map>
#include <cmath>

using namespace std;

int main(void){
    string N;

    map<char,int> myMap;

    cin >> N;

    for(int i = 0 ; i < N.size() ; ++i) myMap[N[i]]++;
    
    int max = 0;
    
    myMap['6'] = int(ceil(float(myMap['6'] + myMap['9']) / 2));
    myMap['9'] = myMap['6'];

    for(auto x : myMap){
        if(x.second > max) max = x.second;
    }

    cout << max;
}