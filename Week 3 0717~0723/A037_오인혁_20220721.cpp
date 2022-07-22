// LeetCode 728
// Title : Self Dividing Numbers
// URL : https://leetcode.com/problems/self-dividing-numbers/

class Solution {
public:
    vector<int> selfDividingNumbers(int left, int right) {
        vector<int> result;
        
        for(int i = left ; i <= right ; ++i){
            
            bool self = true;
            int num = i;
            int digit;
            
            while(num > 0){
                digit = num % 10;
                num /= 10;
                if(digit == 0 || i % digit != 0){ self = false; break;}
            }
            
            if(self) result.push_back(i);
        }
        
        return result;
    }
};