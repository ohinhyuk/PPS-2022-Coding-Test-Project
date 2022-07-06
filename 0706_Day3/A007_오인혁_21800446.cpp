#include <iostream>
#include <vector>
#include <string.h>

using namespace std;

int main(int argc , char** argv){
    
    vector<int> v;

    string s;
    for(int i = 0 ; i < 8 ; ++i){
        cin >> s;
        v.push_back(stoi(s));
    }

    bool asc = true;
    bool dsc = true;

    int temp = v[0];
    for(int i = 1 ; i < 8; ++i){
        if(v[i] < temp) asc = false;
        temp = v[i];
    } 

    for(int i = 6 ; i >=0 ; --i){
        if(v[i] < temp) dsc = false;
        temp = v[i];
    } 
    
    if(asc) cout << "ascending";
    else if(dsc) cout << "descending";
    else cout << "mixed";
}