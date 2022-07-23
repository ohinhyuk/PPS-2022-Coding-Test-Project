#include <string>
#include <vector>
#include <stack>
#include <iostream>
using namespace std;

int solution(vector<vector<int>> board, vector<int> moves) {
    int answer = 0;
    stack<int> busket;
    stack<int> temp[board.size()];
    vector<stack<int>> board_s;
    
    for(int i = 0 ; i < board.size(); ++i){
      for(int j = board.size()-1 ; j >= 0; --j){
          if(board[j][i]!=0) temp[i].push(board[j][i]);    
      }  
        board_s.push_back(temp[i]);
    }
    
    
    for(int i = 0 ; i < moves.size(); ++i){
        if(!board_s[moves[i]-1].empty()){
            int elem = board_s[moves[i]-1].top();    
            board_s[moves[i]-1].pop();
            if(!busket.empty()){
                if(elem == busket.top()){
                    busket.pop();
                    answer += 2;
                    continue;
                }  
            }
            busket.push(elem);
        }
    }
    
    
    
    return answer;
}