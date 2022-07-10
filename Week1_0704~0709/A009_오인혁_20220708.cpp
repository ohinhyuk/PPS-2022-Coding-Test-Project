#include <string>

using namespace std;

bool solution(string s) {
    bool answer = true;
    int i = 0;
    if(s.size() != 4 && s.size() != 6) return false;
    while(s[i] != '\0') if(isdigit((s[i++])) == 0) return false;
    return answer;
}