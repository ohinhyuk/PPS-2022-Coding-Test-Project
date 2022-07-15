// BeakJun 17211
// Title : 좋은 날 싫은 날
// URL : https://www.acmicpc.net/problem/17211

#include <iostream>
#include <vector>

using namespace std;

int main(void){

    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    int N;
    bool bad;
    float percent [4];

    cin >> N >> bad;
    float answer[N][2];

    for(int i = 0 ; i < 4 ; ++i) cin >> percent[i];

    
    if(bad) answer[0][0] = percent[2]* 1000;
    else answer[0][0] = percent[0] * 1000;
        
    answer[0][1] = 1000 - answer[0][0];

    if(N >= 2){
        for(int i = 1 ; i < N ; ++i){
            answer[i][0] = answer[i-1][0] * percent[0] + answer[i-1][1] * percent[2];
            answer[i][1] = answer[i-1][0] * percent[1] + answer[i-1][1] * percent[3];
        }
    }
    cout << fixed;
    cout.precision(0);
    cout << answer[N-1][0] << "\n" << answer[N-1][1];
}