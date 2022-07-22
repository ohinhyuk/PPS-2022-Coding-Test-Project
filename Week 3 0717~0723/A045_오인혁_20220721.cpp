// BaekJoon 1157
// Title : 단어 공부
// URL : https://www.acmicpc.net/status?user_id=dhdlsgur52&problem_id=1157&from_mine=1

#include <iostream>
#include <map>

using namespace std;

int main(void){
    
    map<char,int> mymap;

    string s;
    cin >> s;
    
    for(int i = 0 ; i < s.size(); ++i) mymap[toupper(s[i])]++;

    int max = -1;
    char max_c;

    for(auto x : mymap){ 
        if(x.second > max){
            max = x.second; 
            max_c = x.first; 
            
        }

    }
    
    for(auto x : mymap) if(max == x.second && max_c != x.first) { max_c = '?';}

            cout << max_c;

}