// LeetCode 14
// Title : Longest Common Prefix
// https://leetcode.com/problems/longest-common-prefix/

class Solution {
public:

    string longestCommonPrefix(vector<string>& strs) {
        int min = 201;
        string s;
        for(int i = 0 ; i < strs.size(); ++i){
            if(strs[i].size() < min ){ min = strs[i].size(); s = strs[i];}
        }
        
        for(int i = 0 ; i < strs.size() ; ++i){
            for(int j = 0; j < min ; ++j){
                if(s[j] != strs[i][j]){ s = s.substr(0,j); min = s.size(); }
            }
        }
        
        if(min == -1) return "";
        else return s;
        
    }
};