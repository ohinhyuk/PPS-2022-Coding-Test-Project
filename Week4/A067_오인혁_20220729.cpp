class Solution {
public:
    string removeDuplicates(string s) {
        int len = s.size();
        for(int i = 0 ; i < len-1 ;++i){
            if(s[i] == s[i+1]){ 
                s.erase(s.begin()+(i+1)); 
                s.erase(s.begin()+i); 
                if(i != 0) i--;
                i--;
                len -= 2;
            }
            
        }
        
        return s;
    }
};