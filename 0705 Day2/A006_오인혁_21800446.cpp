#include <string>
#include <iostream>
using namespace std;

bool solution(string s)
{
    int cntP = 0;
    int cntY = 0;
    
    for(int i = 0 ; i < s.size(); ++i){
        if( s[i]=='p' || s[i]=='P' ) cntP++;
        if( s[i]=='y' || s[i]=='Y' ) cntY++;
    }
    
    if(cntP == cntY) return true;
    return false;
}