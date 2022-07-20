class Solution {
public:
    bool halvesAreAlike(string s) {
        int vowel[2] = {0};
        int mid = s.size() / 2;
        
        for(int i = 0 ; i < s.size(); ++i){
            if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u' || s[i]=='A' || s[i]=='E' || s[i]=='I' || s[i]=='O' || s[i]=='U'){
                if(i < mid) vowel[0]++;
                else vowel[1]++;
            }
        }
        
        return vowel[0] == vowel[1];
    }
};