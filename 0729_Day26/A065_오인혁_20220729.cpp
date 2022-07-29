// BaekJoon 11650
// Title : 좌표 정렬하기
// URL : https://www.acmicpc.net/problem/11650

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool comp(const pair<int,int> &a ,const pair<int,int> &b){

    if(a.first == b.first) return a.second < b.second;
    return a.first < b.first;
}

int main(void){

    int N;
    int a,b;

    vector<pair<int,int>> v;
    pair<int,int> temp;
    
    cin >> N;

    for(int i = 0 ; i < N ; ++i){
        cin >> temp.first >> temp.second;    
        v.push_back(temp);
    }

    sort(v.begin() , v.end() , comp);

    for(pair<int,int> x : v) cout << x.first << ' ' << x.second << "\n" ;

    return 0;
}