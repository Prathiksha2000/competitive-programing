/*
Write a function to delete a node in a singly-linked list.
You will not be given access to the head of the list, instead you will be given access to the node to be deleted directly.
It is guaranteed that the node to be deleted is not a tail node in the list.
Example 1:
Input: head = [4,5,1,9], node = 5
Output: [4,1,9]
Explanation: You are given the second node with value 5, the linked list should become 4 -> 1 -> 9 after calling your function.
*/

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
 
 
class Solution {
public:
    void deleteNode(ListNode* node) {
    // Find next node using next pointer
    ListNode* temp  = node->next;

    // Copy data of next node to this node
    node->val  = temp->val;

    // Unlink next node
    node->next  = temp->next;

    // Delete next node
    delete(temp);
    }
};
