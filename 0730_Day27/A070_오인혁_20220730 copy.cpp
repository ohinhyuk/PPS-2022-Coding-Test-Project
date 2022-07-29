#include <iostream>
#include <queue>

using namespace std;

int main(void){

    int N;

    queue<int> Q;
    cin >> N;

    for(int i = 1 ; i <= N ; ++i) Q.push(i);

    while(Q.size() > 2){
        Q.pop();
        Q.push(Q.front());
        Q.pop();
    }
    if(Q.size() == 2)
        Q.pop();

    cout << Q.front();
}