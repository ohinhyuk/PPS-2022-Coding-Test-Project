// Programmers
// Title : JadenCase 문자열 만들기
// URL : https://school.programmers.co.kr/learn/courses/30/lessons/12951

#include <string>
#include <vector>

using namespace std;

string solution(string s) {
    string answer = "";
    
    for(int i = 0 ; i < s.size() ; ++i){
        if( (i == 0 && isalpha(s[i])) || (s[i-1]== ' ' && isalpha(s[i])) ) s[i] = toupper(s[i]);
        else s[i] = tolower(s[i]);
    }
    
    return s;
}