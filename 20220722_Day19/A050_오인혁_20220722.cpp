#include <iostream>

using namespace std;

char change_char(char a){

    if(int(a) <= 67) return char(a+23);
    return char(a-3);
}


int main(void){
    string s;
    cin >> s;
    for(int i = 0 ; i < s.size() ; ++i){
        cout << change_char(s[i]);
    }
}