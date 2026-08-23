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
        ListNode* temp=head;
        int len=0;
        while(temp!=nullptr)
        {
            len++;
            temp=temp->next;
        }
        int pos=len-n;
        if(pos==0)
        return head->next;
        temp=head;
        for(int i=1;i<pos;i++)
        {
            temp=temp->next;
        }
        temp->next=temp->next->next;
        return head;
    }

};
