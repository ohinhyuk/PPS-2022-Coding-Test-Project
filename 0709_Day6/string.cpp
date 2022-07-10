#include <iostream>
#include <cstring>
#include <vector>
// #include <stdilib>

using namespace std;

class String{
    private: 
        char* data;

public: 
    
    String(const char* s){

        data = new char [strlen(s)];
        strcpy(data,s);
    }
    ~String(  ){ if(data){delete[] data;cout << "kkkkkkp";}};
    void GetString(){
        for(int i = 0 ; i < strlen(data) ; ++i) cout << data[i];
    }
};

int main(void){
    int a;

    vector<int> v;


    cout << v.empty();
}