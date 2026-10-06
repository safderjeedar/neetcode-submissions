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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int cnt = 0;
        ListNode* t = head;
        while(t){
            t = t->next;
            cnt++;
        }
        if(n==cnt)
          return head->next;
        int k =  cnt-n-1;
        ListNode* temp = head;
        while(k){
          temp = temp->next;
          k--;
        }
        temp->next = temp->next->next;
        return head;
    }
};
