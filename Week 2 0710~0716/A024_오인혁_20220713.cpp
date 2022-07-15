// LeetCode 860
// Title : Lemonade Change
// URL : https://leetcode.com/problems/lemonade-change/


class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        int num_bills[2] ={0,0};
        
        for(int i = 0 ; i < bills.size() ; ++i){
            if(bills[i]==5) num_bills[0]++;
            else if(bills[i]== 10){ num_bills[0]--; num_bills[1]++;}
            else { 
                if(num_bills[1] != 0) {num_bills[0]--; num_bills[1]--;}
                else{ num_bills[0]-=3; }    
            }
            if(num_bills[0] < 0 || num_bills[1] < 0) return false;
        }
        
        return true;
    }
};