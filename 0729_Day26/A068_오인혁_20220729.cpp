#include <iostream>
#include <list>

using namespace std;

int main(void){
    int N;
    string s;
    int push;
    
    cin.tie(NULL);
	cin.sync_with_stdio(false);
    
    cin >> N;
    
    list<int> li;

    for(int i = 0 ; i < N ; ++i){
        cin >> s;
        switch (s[1])
        {
        case 'u':
            cin >> push;
            li.push_back(push);
            break;
        case 'r':
            if(li.empty()) cout << -1 << "\n";
            else cout<< li.front() << "\n";
            break;
        case 'a':
            if(li.empty()) cout << -1 << "\n";
            else cout<< li.back() << "\n";
            break;
        case 'i':
            cout << li.size() << "\n";
            break;
        case 'o':
            if(li.empty()) cout << -1 << "\n";
            else{
                cout << li.front() << "\n";
                li.pop_front();
            }
            break;
        default:
            cout << li.empty() << "\n";
            break;
        }
    }
}