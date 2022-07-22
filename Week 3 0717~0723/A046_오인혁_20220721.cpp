// BAEKJOON 1159
// Title : 농구경기
// URL : https://www.acmicpc.net/status?user_id=dhdlsgur52&problem_id=1159&from_mine=1

#include <iostream>
#include <map>

using namespace std;

int main(void){

    int N;
    string name;
    string answer;

    map<char , int> mymap;

    cin >> N;

    for(int i = 0 ; i < N ; ++i){
        cin >> name;
        mymap[name[0]]++;
    }

    for(auto x : mymap){
        if(x.second >= 5) answer += x.first;
    }

    if(answer == "") cout <<"PREDAJA";
    else cout << answer;
}