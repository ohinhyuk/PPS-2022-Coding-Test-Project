// BaekJun 5355
// Title : 화성 수학
// URL : https://www.acmicpc.net/problem/5355

#include <iostream>

using namespace std;

int main(void){
    int T;
    float num;

    string s;

    cin >> T;
    cin.ignore();

    for(int i = 0 ; i < T ; ++i){
        cin >> num;
        cin.ignore();
        
        getline(cin, s);

        for(int j = 0 ; j < s.size() ; ++j){
            switch (s[j])
            {
            case ' ':
                break;
            case '@':
                num *=3;
                break;
            case '#':
                num-=7;
                break;
            case '%':
                num+=5;
                break;
            default: 
                break;
            }
        }

        cout << fixed;
        cout.precision(2);
        cout << num << endl;
    }
}