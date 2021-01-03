/*
Merge two sorted linked lists and return it as a sorted list. The list should be made by splicing together the nodes of the first two lists.
Example 1:
Input: l1 = [1,2,4], l2 = [1,3,4]
Output: [1,1,2,3,4,4]
Example 2:
Input: l1 = [], l2 = [0]
Output: [0]
Constraints:
The number of nodes in both lists is in the range [0, 50].
-100 <= Node.val <= 100
Both l1 and l2 are sorted in non-decreasing order.
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
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        if(l1==NULL) return l2;
        if(l2==NULL) return l1;
        ListNode *p1=l1;
        ListNode *p2=l2;
        ListNode *head=NULL;
        ListNode *cur=NULL;
        while(p1&&p2){
            if(head==NULL){
                if(p1->val<=p2->val){
                    head=cur=p1;
                    p1=p1->next;
                }else{
                    head=cur=p2;
                    p2=p2->next;
                }
            }else{
                if(p1->val<=p2->val){
                    cur->next=p1;
                    cur=p1;
                    p1=p1->next;
                }else{
                    cur->next=p2;
                    cur=p2;
                    p2=p2->next;
                }
            }
        }
        if(p1) cur->next=p1;
        if(p2) cur->next=p2;
        return head;
    
    }
};
