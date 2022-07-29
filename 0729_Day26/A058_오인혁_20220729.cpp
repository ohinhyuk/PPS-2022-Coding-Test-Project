// LeetCode 206
// Title : Reverse Linked List
// URL : https://leetcode.com/problems/reverse-linked-list/

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode* before = nullptr;
        ListNode* next = nullptr;
        for(; head ;){
            next = head->next;
            
            head -> next = before;
            before = head;
            head = next;
        }
        return before;
    }
};