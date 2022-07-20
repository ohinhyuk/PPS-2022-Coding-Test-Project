// LeetCode 551
// Student Attendance Record 1
// URL : https://leetcode.com/problems/student-attendance-record-i/

class Solution {
public:
    bool checkRecord(string s) {
        
        int A = 0;
        
        for(int i = 0 ; i < s.size() ; ++i){
            if(i != 0 && i !=s.size()){
                if(s[i-1] == 'L' && s[i]=='L' && s[i+1] =='L') return false;
            }
    
            if(s[i]== 'A') A++;
        }
        
        if(A >= 2) return false;
        
        return true;
    }
    
};