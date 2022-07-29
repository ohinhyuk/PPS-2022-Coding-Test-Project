class Solution {
public:
    string addBinary(string a, string b) {
        
        string result;
        bool up = false;
        
        if(a.size() > b.size()){
            
            reverse(a.begin() , a.end());
            reverse(b.begin() , b.end());

            for(int i = 0 ; i < b.size() ; ++i){
            if(up){
                if(a[i]== '1' && b[i]=='1')result += '1';
                else if(a[i] =='0' && b[i] =='0'){ result+= '1'; up = false;}
                else result+= '0';
            }
            else{
                if(a[i] =='1' && b[i]== '1'){ result+='0'; up = true;}
                else if(a[i] == '0' && b[i] =='0') result+= '0';
                else result+='1';
            }
        }
        for(int i = b.size() ; i < a.size(); ++i){
            if(up && a[i] =='1'){ result += '0'; up = true;}
            else if(up && a[i]=='0') { up = false; result += '1';}
            else result += a[i];
            
        }
        
            if(up) result += '1';
            
            reverse(result.begin() , result.end());
        }
        else{
            int min_length = a.size();
            int diff = b.size() - a.size();
            
            
        reverse(a.begin() , a.end());
        reverse(b.begin() , b.end());
            
            for(int i = 0 ; i < a.size() ; ++i){
            if(up){
                if(a[i]== '1' && b[i]=='1')result += '1';
                else if(a[i] =='0' && b[i] =='0'){ result+= '1'; up = false;}
                else result+= '0';
            }
            else{
                if(a[i] =='1' && b[i]== '1'){ result+='0'; up = true;}
                else if(a[i] == '0' && b[i] =='0'){ result+= '0';}
                else result+='1';
            }
        }
        for(int i = a.size() ; i < b.size(); ++i){
             if(up && b[i] =='1'){ result += '0'; up = true;}
            else if(up && b[i]=='0') { up = false; result += '1';}
            else result += b[i];
        }
            if(up) result += '1';
            
            reverse(result.begin() , result.end());
        }
        
        return result;
    }
};