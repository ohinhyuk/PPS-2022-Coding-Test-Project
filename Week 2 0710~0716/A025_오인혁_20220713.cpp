// LeetCode 342
// Title : Power of Four
// URL : https://leetcode.com/problems/power-of-four/

class Solution {
public:
    bool isPowerOfFour(int n) {
        
        double temp = n;
        
        if( temp == 1 ) return true;
        
        while(temp>4) temp /= 4;
        
        if(temp == 4) return true;
        
        return false;
    }
};