class Solution {
public:
    bool isPalindrome(string s) {
        string ss;
        
        for(int i = 0 ; i < s.size() ; ++ i){
            if(isalpha(s[i])) ss += tolower(s[i]);
            else if(isdigit(s[i])) ss += s[i];
        }
        
        string ss_reverse = ss;
        reverse(ss_reverse.begin(), ss_reverse.end());
        
        return ss_reverse==ss;
    }
};