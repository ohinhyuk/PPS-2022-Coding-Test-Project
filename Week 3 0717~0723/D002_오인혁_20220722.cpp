#include <iostream>

using namespace std;

int main(void){
    
    int H, W , N;

    int T;

    cin >> T;

    for(int i = 0 ; i < T ; ++i){
        cin >> H >> W >> N;
        int front = (N % H)==0 ? H : (N % H) ;
        int back = (N % H)==0 ? (N/H) : (N/H)+1 ;

        printf("%d%02d\n",front,back);
    }

}