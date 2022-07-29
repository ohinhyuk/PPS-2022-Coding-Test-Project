#include <string>
#include <vector>

using namespace std;

int solution(vector<int> cookie) {
    vector<int> subset(cookie);
    for(int i = 1 ; i < cookie.size(); ++i) subset[i] += subset[i-1];
    
    int max = 0;
    
    for(int l = 0 ; l < cookie.size()-1 ; ++l){
        for(int m = l ; m < cookie.size()-1 ; ++m){
            int left_sum = subset[m] -subset[l] +cookie[l];
            if(left_sum <= max) continue;
            
            for(int r = m+1 ; r < cookie.size() ; ++r){
                int right_sum = subset[r] - subset[m+1] + cookie[m+1];
                if( left_sum == right_sum){ max = left_sum; break;}
                else if(left_sum < right_sum) break;
            }
        }
    }
    
        
    return max;
}