/*

BeakJun 5639
Title : 이진 검색 트리
URL : https://www.acmicpc.net/problem/5639


@문제


이진 검색 트리는 다음과 같은 세 가지 조건을 만족하는 이진 트리이다.

노드의 왼쪽 서브트리에 있는 모든 노드의 키는 노드의 키보다 작다.
노드의 오른쪽 서브트리에 있는 모든 노드의 키는 노드의 키보다 크다.
왼쪽, 오른쪽 서브트리도 이진 검색 트리이다.


전위 순회 (루트-왼쪽-오른쪽)은 루트를 방문하고, 왼쪽 서브트리, 오른쪽 서브 트리를 순서대로 방문하면서 노드의 키를 출력한다. 
후위 순회 (왼쪽-오른쪽-루트)는 왼쪽 서브트리, 오른쪽 서브트리, 루트 노드 순서대로 키를 출력한다. 
예를 들어, 위의 이진 검색 트리의 전위 순회 결과는 50 30 24 5 28 45 98 52 60 이고, 후위 순회 결과는 5 28 24 45 30 60 52 98 50 이다.

이진 검색 트리를 전위 순회한 결과가 주어졌을 때, 이 트리를 후위 순회한 결과를 구하는 프로그램을 작성하시오.


*/

// 방법 1 : Tree 구현 후 다 집어 넣고 postfix 순서로 print 하기

// #include <iostream>
// #include <vector>

// using namespace std;

// struct tree_node
// {
//     int data;

//     tree_node* left;
//     tree_node* right;
//     tree_node(int k){data = k; left=nullptr;right=nullptr;}
// };

// class BST{
// private :
//     tree_node* root;
// public :
//     BST(){root = nullptr;};
//     ~BST(){};

//     void insert(int key);
//     void postfix_print();
//     void postfix_print(tree_node* node);
    
// };
// void BST::insert(int key){
//         if(!root){
//             root = new tree_node(key);
            
//          return;}
        
//         tree_node* search = root;

//         while(search){
//             if(search->data == key) return;
//             else if(search->data > key){ 
//                 if(!search->left) {search->left = new tree_node(key); return;}
//                 search = search->left; 
//                 }
//             else {
//                 if(!search->right) {search->right = new tree_node(key); return;}
//                 search = search-> right;
//             }
//         }
// }

// void BST::postfix_print(){
//     postfix_print(root);
// }

// void BST::postfix_print(tree_node* node){
//     if(!node) return;

//     if(node->left) postfix_print(node->left);
//     if(node->right) postfix_print(node->right);
//     cout << node->data << endl;
// }

// int main(){

//     ios_base::sync_with_stdio(false);
//     cin.tie(0);
//     cout.tie(0);

//     BST tree;

//     int temp;
    
    
//     while(cin >> temp){
        
//         tree.insert(temp);
//     }
    
//         cout << "DD"<< endl;

//     tree.postfix_print();
// }



// 방법 2

#include <iostream>
#include <vector>

using namespace std;

void pre_to_post(int start , int end, vector<int>& v){
    if(start >= end) return;

    int idx = start + 1;
    while(v[idx] < v[start] && idx < end){
        idx++;
    }
    
    pre_to_post(start+1 , idx,v);
    pre_to_post(idx, end , v);
    cout << v[start] << "\n";
}

int main(void){

    ios_base::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);

    int temp;
    vector<int> v;

    while(cin >> temp) v.push_back(temp);
    
    pre_to_post(0,v.size(),v);

}