
/*
Given a sorted linked list, delete all duplicates such that each element appear only once.
Example 1:
Input: 1->1->2
Output: 1->2
*/

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
    ListNode* deleteDuplicates(ListNode* head) {
   
        ListNode* first=head;
        ListNode* t;
        while(first!=NULL && first->next!=NULL)
        {
            if(first->val==first->next->val){
                t = first -> next;
                first->next=first->next->next;
                delete(t);
               // first=first->next;
            }else{
                first=first->next;
            }
        }
        return head;
    }
    
