/*

BaekJun 1316
Title : 그룹 단어 체커
URL : https://www.acmicpc.net/problem/1316



문제

그룹 단어란 단어에 존재하는 모든 문자에 대해서, 각 문자가 연속해서 나타나는 경우만을 말한다. 
예를 들면, ccazzzzbb는 c, a, z, b가 모두 연속해서 나타나고, kin도 k, i, n이 연속해서 나타나기 때문에 그룹 단어이지만, 
aabbbccb는 b가 떨어져서 나타나기 때문에 그룹 단어가 아니다.

단어 N개를 입력으로 받아 그룹 단어의 개수를 출력하는 프로그램을 작성하시오.


*/

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(void){

    int N;  
    int cnt = 0;
    vector<char> v;
    string s;

    cin >> N;

    for(int i = 0 ; i < N; ++i){
        
        cin >> s;
        v.push_back(s[0]);
        
        for(int j = 0 ; j < s.size()-1 ; ++j){
            if(s[j] != s[j+1]){
                if(find(v.begin() , v.end() , s[j+1])!=v.end()){ cnt--; break;}
                v.push_back(s[j+1]);
            }
        }
        cnt++;
        v.clear();
    }

    cout << cnt;
}