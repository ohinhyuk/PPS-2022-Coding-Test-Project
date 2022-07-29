// Leetcode 496
// Title : Next Greater Element 1
// URL :https://leetcode.com/problems/next-greater-element-i/

class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
    
        vector<int> result;
        
        for(int i = 0 ; i < nums1.size(); ++i){
            vector<int>::iterator iter;
            iter = find(nums2.begin() , nums2.end(), nums1[i]);
            for(iter; ; iter++){
                if(iter == nums2.end()){
                    result.push_back(-1);
                    break;
                }
                if(*iter > nums1[i]){
                    result.push_back(*iter);
                    break;
                }
            }
        }
        
        return result;
    }
};