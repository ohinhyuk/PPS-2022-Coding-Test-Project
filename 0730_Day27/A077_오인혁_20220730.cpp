#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(void){
    int num;
    vector<int> v;

    for(int i  =0 ; i < 8 ; ++i){
        cin >> num;
        v.push_back(num);
    }
    vector<int> v_sort(v);

    sort(v_sort.begin() , v_sort.end());
    int total = 0;
    for(int i = 3 ; i < 8 ; ++i) total += v_sort[i];
    cout << total << "\n";
    
    vector<int> index;
    for(int i = 3 ; i < 8 ; ++i){
        index.push_back(find(v.begin() , v.end() , v_sort[i]) - v.begin()+1);
    }
    sort(index.begin() , index.end());
    for(auto x : index) cout << x << ' ';
}