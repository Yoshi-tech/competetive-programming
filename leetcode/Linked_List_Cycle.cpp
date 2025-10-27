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
    bool hasCycle(ListNode *head) {
        ListNode* current = head;
        bool isCycle = 0;
        unordered_set<ListNode*> lookup;
        if(current == nullptr) return false;
        while(!isCycle) {
            
            if(current->next == nullptr){
                break;
            }
            else if(lookup.find(current) != lookup.end()){
                isCycle = 1;
                
            }

            else{
                lookup.insert(current);
            }
            current = current->next;
        }

        return isCycle;
        
    }
};
