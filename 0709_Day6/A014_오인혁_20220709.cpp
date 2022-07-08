//정리 필요!
// Leetcode
// 228. Summary Ranges
// URL : https://leetcode.com/problems/summary-ranges/submissions/

class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        
        
        vector<string> result;
        
        if(nums.size()==0) return result;
        
        int start_idx = 0;
        int end_idx =1;
        
        string temp;
        for(int i = 0 ; i < nums.size()-1 ; ++i){
            if( nums[end_idx - 1] + 1 != nums[end_idx] ){
                if(start_idx == end_idx - 1){
                    cout << start_idx << end_idx;
                    if(nums[start_idx] < 0 ) temp = "-" + to_string(nums[start_idx] * -1);
                    else temp =  to_string(nums[start_idx]);
                    result.push_back(temp);

                    start_idx++;
                    end_idx++;    
                }
                
                else{
                    
                    temp = to_string(nums[start_idx]);
                    temp += "->";
                    temp += to_string(nums[end_idx-1]);
                    result.push_back(temp);
                    
                    start_idx = end_idx++;
                }
                
            }
            else{
                end_idx++;
            }
            
            
        }
        if(end_idx == nums.size()){
                if(start_idx == end_idx - 1){ 
                    if(nums[start_idx] < 0 ){ 
                        temp = "-" + to_string(nums[start_idx] * -1);}
                    else temp =  to_string(nums[start_idx]);
                    result.push_back(temp);
                }
                else{
                    temp = to_string(nums[start_idx]);
                        temp += "->";
                        temp += to_string(nums[end_idx-1]);
                        result.push_back(temp);

                        start_idx = end_idx++;
                }
            }
        cout << start_idx << end_idx;
        return result;
    }
};