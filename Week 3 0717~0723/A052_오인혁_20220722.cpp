#include <iostream>

using namespace std;

int score(string s){
    int total = 0;
    int stack = 0;

    for(int i = 0 ; i < s.size(); ++i){
        if(s[i]=='O') total += (++stack);
        else stack = 0;
    }

    return total;
}

int main(void){
    string s;
    int N;

    cin >> N;

    for(int i = 0 ; i < N; ++i){
        cin >> s;
        cout << score(s) << endl;
    }
}