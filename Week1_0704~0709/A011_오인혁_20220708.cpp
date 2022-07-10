#include <string>
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool comp(const pair<int,float> &a , const pair<int,float> &b){
    
    if(a.second == b.second) return a.first < b.first;
    
    return  a.second > b.second;
}

vector<int> solution(int N, vector<int> stages) {
    
    vector<int> answer;
    vector<pair<int,float>> v_p;
    
    vector<int> fail(N,0);
    vector<int> total(N,0);
    
    for(int i = 0 ; i < stages.size(); ++i){
        for(int j = 0 ; j < stages[i] ; ++j) total[j]++;
        if(stages[i]-1==N) continue;
        fail[stages[i]-1]++;
    }
    
    
    for(int i = 0 ; i < N ; ++i){
        if(fail[i]==0) v_p.push_back(make_pair(i+1,0));
        else v_p.push_back(make_pair(i+1, float(fail[i]) / total[i]));
    }
    
    sort(v_p.begin() , v_p.end() , comp);
    
    for(int i = 0 ; i < N ; ++i){
        answer.push_back(v_p[i].first);
    }
    
    return answer;
}