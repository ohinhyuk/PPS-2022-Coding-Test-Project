#include <iostream>

using namespace std;

int alpha_to_num(char a){
    int result = (int(a)-65)/3 + 3;

    if(a =='Z' ||a =='S' ||a =='V' ||a =='Y' ) result--;

    return result;
}

int main(void){
    string s;
    int total = 0;
    
    cin >> s;

    for(int i = 0 ; i < s.size(); ++i) total += alpha_to_num(s[i]);
    
    cout << total ;
}