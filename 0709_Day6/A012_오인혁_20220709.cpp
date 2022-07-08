// LeetCode
// 204. Count Primes
// URL : https://leetcode.com/problems/count-primes/submissions/

#include <vector>

class Solution {
public:
    int countPrimes(int n) {
        
        if(n==0) return 0;
        
        vector<bool> is(n,true);
        
        int cnt = 0;
        
        is[0] = false;
        is[1] = false;
        
        for(int i = 2 ; i * i < n ; ++i){
            if(!is[i]) continue;
            for(int j = i*i ; j < n ; j+=i){
                if(!is[j]) continue;
                else is[j] = false;
            }
        }
        
        for(int i = 0 ; i < n ; ++i) if(is[i]==true) cnt++;
        
        return cnt;
    
    }
};