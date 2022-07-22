#include <algorithm>

class Solution {
public:
    string removeOuterParentheses(string s) {
        stack<char> s_stack;
        string word;
        string result;
        
        int cnt = 0;
        
        for(int i = 0 ; i < s.size(); ++i){
            s_stack.push(s[i]);
            if(s[i]=='(') cnt++;
            else{
              cnt--;
                if(cnt == 1){
                    while(s_stack.size() > 1){
                        word += s_stack.top();
                        s_stack.pop();
                    }
                }
                
                reverse(word.begin() ,word.end());
                result += word;
                word = "";
                
                if(cnt == 0){
                    while(!s_stack.empty()){
                        s_stack.pop();
                    }
                }
            } 
           
        }
         return result;
    }
};