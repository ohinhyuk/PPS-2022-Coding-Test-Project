#include <iostream>
#include <vector>

using namespace std;

int main(void){
    vector<int> v;
    vector<int> result;

    int N , K;

    cin >> N >> K;

    for(int i = 1 ; i <= N ; ++i) v.push_back(i);

    int index = -1;

    while(!v.empty()){
        index = (index + K) % N;
        
        result.push_back(v[index]);
        v.erase(v.begin() + index);
        index --;
        N--;
    }   
    
    for(int i = 0 ; i < result.size() ; ++i){
        if(i == 0) cout << "<";
        if(i != result.size()-1)cout << result[i] << ", ";
        else cout << result[i];

        if(i == result.size()-1) cout << ">";
        
    }

}