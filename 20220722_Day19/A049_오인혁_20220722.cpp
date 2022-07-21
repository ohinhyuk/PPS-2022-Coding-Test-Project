#include <iostream>

using namespace std;

bool isvowel(char a){
    if(a == 'a' || a == 'e' || a== 'i' || a== 'o' || a=='u') return true;
    
    return false;
}

bool vowel_check(string s){
    for(int i = 0 ; i < s.size() ; ++i){
        if(isvowel(s[i])) return true;
    }
    return false;
}

bool consecutive(string s){
    for(int i = 1 ; i < s.size() - 1; ++i){
        if((isvowel(s[i-1]) && isvowel(s[i]) && isvowel(s[i+1])) ||(!isvowel(s[i-1]) && !isvowel(s[i]) && !isvowel(s[i+1]))) return false;
    }
    return true;
}

bool eeoo(string s){
    for(int i = 0 ; i < s.size()-1; ++i){
        if(s[i]==s[i+1] && s[i]!='e' && s[i]!= 'o') return false;
    }
    return true;
}

int main(void){
    string s;

    while(1){
        cin >> s;
        if(s == "end") break;
        if(vowel_check(s) && consecutive(s) && eeoo(s)) cout << "<" << s <<">" << " is acceptable." << endl;
        else cout << "<" << s << "> is not acceptable." <<endl; 
    }

}