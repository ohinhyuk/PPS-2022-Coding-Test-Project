// BaekJun 3052
// Title : 나머지
// URL : https://www.acmicpc.net/problem/3052

#include <iostream>
#include <map>

using namespace std;

int main(void){
    map<int, int> mymap;

    int input;

    for(int i = 0 ; i < 10; ++i){
        cin >> input;
        mymap[input % 42]++;
    }

    cout << mymap.size();
}