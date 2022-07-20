// LeetCode 844
// Title : Backspace String Compare
// Url : https://leetcode.com/problems/backspace-string-compare/

class Solution {
public:
    bool backspaceCompare(string s, string t) {
        vector<char> s_v;
        vector<char> t_v;
        int length;
        
        for(int i = 0 ; i < s.size() ; ++i){
            if(s[i]=='#'){ if(!s_v.empty()) s_v.pop_back();}
            else s_v.push_back(s[i]);
        }
        for(int i = 0 ; i < t.size(); ++i){
            if(t[i]=='#'){ if(!t_v.empty()) t_v.pop_back();}
            else t_v.push_back(t[i]);
        }
        
        return s_v == t_v;
    }
};