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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {

        ListNode* ans = nullptr;
        ListNode* curr = nullptr;

        while (list1 != nullptr && list2 != nullptr) {

            ListNode* node;

            if (list1->val <= list2->val) {
                node = new ListNode(list1->val);
                list1 = list1->next;
            } else {
                node = new ListNode(list2->val);
                list2 = list2->next;
            }

            if (ans == nullptr) {
                ans = node;
                curr = node;
            } else {
                curr->next = node;
                curr = curr->next;
            }
        }

        while (list1 != nullptr) {

            ListNode* node = new ListNode(list1->val);

            if (ans == nullptr) {
                ans = node;
                curr = node;
            } else {
                curr->next = node;
                curr = curr->next;
            }

            list1 = list1->next;
        }

        while (list2 != nullptr) {

            ListNode* node = new ListNode(list2->val);

            if (ans == nullptr) {
                ans = node;
                curr = node;
            } else {
                curr->next = node;
                curr = curr->next;
            }

            list2 = list2->next;
        }

        return ans;
    }
};