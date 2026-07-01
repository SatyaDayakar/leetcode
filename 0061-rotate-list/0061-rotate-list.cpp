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
    ListNode* rotateRight(ListNode* head, int k) {
       
        if(head == nullptr)
        return head;
        ListNode* fast = head;
        ListNode* slow = head;
        int count = 0 ;
        while(fast!= nullptr)
        {
            fast = fast->next ;
            count++ ;
        } 
        fast = head ;
        k%=count ;
         if(k==0)
        return head ;

        while(k>0)
        {
            fast = fast->next ;
            --k ;
        }
        while(fast->next !=nullptr)
        {
            fast = fast->next ;
            slow = slow->next ;
        }
        fast->next = head ;
        head = slow->next ;
        slow->next = nullptr ;
        return head ;


        return head ;

        
    }
};