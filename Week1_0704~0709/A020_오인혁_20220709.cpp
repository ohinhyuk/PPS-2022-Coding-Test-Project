#include <iostream>

using namespace std;

int main(void){

    int in , out;

    int total = 0 , max = 0 ;

    for(int i = 0 ; i <4 ; ++i){
        cin >> out >> in;

        total += in - out;
        if(max < total) max = total;

    }

    cout << max;
}