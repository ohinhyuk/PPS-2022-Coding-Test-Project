#include <iostream>
#include <map>
using namespace std;

int main(void){

    map<int,int> myMap;

    int A , B , C ;

    cin >> A >> B >> C;

    long long int total = A * B * C;

    for(int i = 0 ; i < 10; ++i) myMap[i] = 0;

    while(total > 0){
        myMap[total % 10] ++;
        total /= 10;
    }

    for(auto x : myMap){
        cout << x.second << endl;
    }

}