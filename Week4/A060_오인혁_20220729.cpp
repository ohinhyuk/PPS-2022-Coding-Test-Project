
class Solution {
public:
    int calPoints(vector<string>& ops) {
        
        vector<int> v;
        
        for(int i = 0 ; i <ops.size() ; ++i){
            if(ops[i] == "C"){
                v.pop_back();
            }
            else if(ops[i] == "D"){
                v.push_back(v.back() * 2);
            }
            else if(ops[i] == "+"){
                int temp = v.back();
                v.pop_back();
                
                int add = v.back() + temp;
                
                v.push_back(temp);
                v.push_back(add);
                
            }
            else{
                v.push_back(stoi(ops[i]));
            }
        }
        int total = 0;
        for(int x : v) total += x;
        
        return total;
    }
};