// BeakJun 2846
// Title : 오르막길
// URL : https://www.acmicpc.net/problem/2846

/*
------------------------------------------------------------------------------

문제

상근이는 자전거를 타고 등교한다. 자전거 길은 오르막길, 내리막길, 평지로 이루어져 있다. 상근이는 개강 첫 날 자전거를 타고 가면서 일정 거리마다 높이를 측정했다. 상근이는 가장 큰 오르막길의 크기를 구하려고 한다.

측정한 높이는 길이가 N인 수열로 나타낼 수 있다. 여기서 오르막길은 적어도 2개의 수로 이루어진 높이가 증가하는 부분 수열이다. 오르막길의 크기는 부분 수열의 첫 번째 숫자와 마지막 숫자의 차이이다.

예를 들어, 높이가 다음과 같은 길이 있다고 하자. 12 3 5 7 10 6 1 11. 이 길에는 2 개의 오르막길이 있다. 밑 줄로 표시된 부분 수열이 오르막길이다. 첫 번째 오르막길의 크기는 7이고, 두 번째 오르막길의 크기는 10이다. 높이가 12와 6인 곳은 오르막길에 속하지 않는다.

가장 큰 오르막길을 구하는 프로그램을 작성하시오.

------------------------------------------------------------------------------
*/

#include <iostream>
#include <vector>

using namespace std;

int main(void){

    
    int N, input, diff ,end, k = 0 ,max = 0;
    vector<int> v;

    cin >> N;

    for(int i = 0 ; i < N ; ++i){
        cin >> input;
        v.push_back(input);
    }

    // first elem
    end = v[0];
    
    for(int i = 1 ; i < N ; ++i){
        
        // 오르막 ing
        if(end < v[i]){ end= v[i]; k++;}
        
        // 오르막 off
        else{
            diff = end - v[i-1-k];
            if(max < diff) max = diff;

            diff = 0; k = 0; end = v[i];
        }
    }

    // last
    if(k > 0){
        diff = end - v[N-1-k];
        if(max < diff) max = diff;
    }

    cout << max;
}