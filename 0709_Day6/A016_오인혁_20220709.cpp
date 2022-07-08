#include <string>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int solution(vector<int> people, int limit) {
    int answer = 0;
    
    sort(people.rbegin() , people.rend());
    
    int j = people.size()-1;
    
    for(int i = 0 ; i < people.size() ; ++i ){
        if(j == i){ ++answer; break;}
        else if(j < i) break;
        
        if(people[i] + people[j] > limit){++answer; continue;}
        --j; ++answer;
    }
    
    return answer;
}