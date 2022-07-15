#include <string>
#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

string solution(string number, int k) {
    string answer = "";
    vector<char> v;
    int start = 0;
    
    while(start < number.size()){
        
        if(k == number.size()-start) break;
        
        int max_index = start;
        
        for(int i = start ; i < k + 1 + start ; ++i){
            if(number[i] > number[max_index]) max_index = i;
        }
        
        k -= max_index - start;
        start = max_index + 1;
        answer += number[max_index];
    }
    
    return answer;
}