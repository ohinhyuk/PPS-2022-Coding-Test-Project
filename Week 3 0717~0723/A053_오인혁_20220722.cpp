// BaekJun  10828
// Title : Stack
// URL : https://www.acmicpc.net/problem/10828

/*

문제

정수를 저장하는 스택을 구현한 다음, 입력으로 주어지는 명령을 처리하는 프로그램을 작성하시오.

명령은 총 다섯 가지이다.

push X: 정수 X를 스택에 넣는 연산이다.
pop: 스택에서 가장 위에 있는 정수를 빼고, 그 수를 출력한다. 만약 스택에 들어있는 정수가 없는 경우에는 -1을 출력한다.
size: 스택에 들어있는 정수의 개수를 출력한다.
empty: 스택이 비어있으면 1, 아니면 0을 출력한다.
top: 스택의 가장 위에 있는 정수를 출력한다. 만약 스택에 들어있는 정수가 없는 경우에는 -1을 출력한다.

*/

#include <iostream>

using namespace std;

class Stack{

private:
        int* arr;
        int index;
public:
    Stack(int N){
        arr = new int [N];
        index = -1;
    }
    ~Stack(){};

    void push(int num){
        arr[++index] = num;
    }
    int top(){
        if(index == -1) return -1;
        return arr[index];
    }
    int size(){
        return (index+1);
    }
    int empty(){
        if (index == -1) return 1;
        else return 0;
    }
    int pop(){
        if(index == -1) return -1;
        return arr[index--];
    }

};

int main(){

    cin.tie(NULL); cout.tie(NULL);
    ios_base::sync_with_stdio(false);

    int N;
    int num;
    string input;

    cin >> N;

    Stack s(N);


    for(int i = 0 ; i < N ; ++i){
        
        cin >> input;

        if(input == "push"){
            cin >> num;
            s.push(num);
        }
        else if(input == "top") cout << s.top() << "\n";
        else if(input == "pop") cout << s.pop() << "\n";    
        else if(input == "size") cout << s.size() << "\n";    
        else if(input == "empty") cout << s.empty() << "\n";    
        
    }
}