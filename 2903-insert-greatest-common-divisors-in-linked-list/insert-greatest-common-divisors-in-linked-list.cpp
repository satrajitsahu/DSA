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
    ListNode* insertGreatestCommonDivisors(ListNode* head) {
        if(!head || !head->next)return head;
        ListNode* curr=head;
        while(curr!=nullptr && curr->next !=nullptr){
            int gcdv=std::gcd(curr->val,curr->next->val);
            ListNode* gcdn=new ListNode(gcdv);
            gcdn->next=curr->next;
            curr->next=gcdn;
            curr=gcdn->next;
        }
        return head;
    }
};