/*

https://leetcode.com/problems/intersection-of-two-linked-lists/

Write a program to find the node at which the intersection of two singly linked lists begins
Input: intersectVal = 8, listA = [4,1,8,4,5], listB = [5,6,1,8,4,5], skipA = 2, skipB = 3
Output: Reference of the node with value = 8
Input Explanation: The intersected node's value is 8 (note that this must not be 0 if the two lists intersect).
From the head of A, it reads as [4,1,8,4,5]. From the head of B, it reads as [5,6,1,8,4,5]. 
There are 2 nodes before the intersected node in A; There are 3 nodes before the intersected node in B.
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
ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
       
    // Maintaining two pointers ptr1 and ptr2
    // at the head of A and B,
    ListNode* ptr1 = headA;
    ListNode* ptr2 = headB;
 
    // If any one of head is NULL i.e
    // no Intersection Point
    if (ptr1 == NULL || ptr2 == NULL) {
 
        return NULL;
    }
 
    // Traverse through the lists until they
    // reach Intersection node
    while (ptr1 != ptr2) {
 
        ptr1 = ptr1->next;
        ptr2 = ptr2->next;
 
        // If at any node ptr1 meets ptr2, then it is
        // intersection node.Return intersection node.
 
        if (ptr1 == ptr2) {
 
            return ptr1;
        }
        /* Once both of them go through reassigning,
        they will be equidistant from the collision point.*/
 
        // When ptr1 reaches the end of a list, then
        // reassign it to the head2.
        if (ptr1 == NULL) {
 
            ptr1 = headB;
        }
        // When ptr2 reaches the end of a list, then
        // redirect it to the head1.
        if (ptr2 == NULL) {
 
            ptr2 = headA;
        }
    }
 
    return ptr1; 
    }
};
