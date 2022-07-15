// BeakJun 17217
// Title : 달나라 토끼를 위한 구매대금 지불 도우미
// URL : https://www.acmicpc.net/problem/17212

/*
------------------------------------------------------------------------------------------

문제 

달나라 토끼들이 사용하는 화폐는 동전뿐이다. 
동전의 종류는 1원, 2원, 5원, 7원 이렇게 4종류가 있다. 
물건을 사고 동전으로 계산을 하는데 동전의 개수가 최소가 되도록 지불하지 않는 것은 불법이다. 
예를 들어, 17원을 지불할 때 7원짜리 동전 1개와 5원짜리 동전 2개로 지불해야 합법이고, 7원짜리 동전 2개와 2원짜리 동전 1개, 
1원짜리 동전 1개로 지불해도 17원이 되지만, 총 동전의 개수가 4개가 되어 최소 개수가 아니므로 불법이다.

지불 금액을 입력받아 합법이 되는 동전 개수를 출력으로 내어주는 프로그램을 작성해보자.

-------------------------------------------------------------------------------------------
*/

#include <iostream>

using namespace std;

// Function find_min
// return min coin num of N (5,2,1)
int find_min(int N){

    int coin[3] = {5, 2 , 1};
    int cnt= 0;

    for(int i = 0 ; i < 3 && N!=0; ++i){
        if(N >= coin[i]){
            cnt += N / coin[i];
            N = N % coin[i];
        }
    }

    return cnt;
}

int main(void){
    
    ios_base::sync_with_stdio(NULL);

    int N , cnt = 0;
    int min_cnt = 100000;
    
    cin >> N;

    // Finding number of 7 that makes coin num to min.
    for(int i = N / 7 ; i >=0 ;--i){
        
        int N_cpy = N;
        
        N_cpy -= 7 * i;
        cnt = i; // number of 7
        cnt+=find_min(N_cpy); // plus number of 5,2,1

        min_cnt=min(min_cnt,cnt);
    }

    cout << min_cnt;

}