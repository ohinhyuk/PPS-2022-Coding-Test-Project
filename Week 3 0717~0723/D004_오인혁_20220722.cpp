// BaekJoon 5397
// Title : 키로거
// URL : https://www.acmicpc.net/problem/5397

/*


문제


창영이는 강산이의 비밀번호를 훔치기 위해서 강산이가 사용하는 컴퓨터에 키로거를 설치했다. 
며칠을 기다린 끝에 창영이는 강산이가 비밀번호 창에 입력하는 글자를 얻어냈다.

키로거는 사용자가 키보드를 누른 명령을 모두 기록한다. 
따라서, 강산이가 비밀번호를 입력할 때, 화살표나 백스페이스를 입력해도 정확한 비밀번호를 알아낼 수 있다. 

강산이가 비밀번호 창에서 입력한 키가 주어졌을 때, 강산이의 비밀번호를 알아내는 프로그램을 작성하시오. 
강산이는 키보드로 입력한 키는 알파벳 대문자, 소문자, 숫자, 백스페이스, 화살표이다.


*/

#include <iostream>
#include <list>

using namespace std;

int main(){

    int N;
    string s;
 
    cin >> N;

    list<char>::iterator it;
    list<char> password;
    
    

    for(int i = 0 ; i < N ; ++i){
        
        cin >> s;    

        password.clear();
        it = password.begin();    
        
        
        for(int j = 0 ; j < s.length(); ++j){
            if(s[j] =='<') {
                if(it != password.begin()) it--;
            }
            else if(s[j]=='>'){
                if( it != password.end()) it++;
            }
            else if(s[j]=='-'){
                if(it != password.begin()) it = password.erase(--it);
            }
            else{
                it = password.insert(it,s[j]);
                it++;
            }   
        }

        for(char x : password) cout << x;
        cout << endl;
    }
    return 0;
}