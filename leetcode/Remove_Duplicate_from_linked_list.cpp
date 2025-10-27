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
        ListNode* current = head;

        while(current != nullptr){
            if(current->next != nullptr){
                if(current->val == current->next->val){
                    current->next = current->next->next;
                }
            }
            else{ // since if the list is something like 1 1 1, moving to the next node after deleting the middle one would not delete the last one as its next is null, it needs to go back and do it
                current = current->next;
            }
        }

        return head;
    }
};
