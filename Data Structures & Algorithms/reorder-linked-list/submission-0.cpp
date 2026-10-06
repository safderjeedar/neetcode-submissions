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
    void reorderList(ListNode* head) {
      // find middle of LL
      ListNode * slow = head;
      ListNode * fast = head;
      while(fast && fast->next){
         slow = slow->next;
         fast = fast->next->next;
      }
//slow->next is now head of the 2nd half, reverse that list
      ListNode * temp = slow->next;
      slow->next = nullptr;
      ListNode * prev = nullptr;
      while(temp){
         ListNode * next = temp->next;
         temp->next = prev;
         prev = temp;
         temp = next;
      }
      ListNode * p2 = prev;
      ListNode * p1 = head;
      while(p2){
        ListNode * p1Next = p1->next;
        ListNode * p2Next = p2->next;
        p1->next = p2;
        p2->next = p1Next;
        p1=p1Next;
        p2=p2Next;

      }
      
    }
};



