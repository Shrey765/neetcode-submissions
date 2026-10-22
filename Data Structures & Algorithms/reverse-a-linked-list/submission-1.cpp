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
    ListNode* solve(ListNode* node, ListNode* &head){
        if(node->next == NULL){
            head = node;
            return node;
        }

        ListNode* temp = solve(node->next, head);
        node->next = NULL;
        temp->next = node;

        return node;
    }
    ListNode* reverseList(ListNode* head) {
        if(head == NULL) return NULL;
        else if(head->next == NULL) return head;

        solve(head, head);

        return head;
    }
};
