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
        vector<ListNode*>ans;
        ListNode* temp =head;
        while(temp!=nullptr)
        {
                 ans.push_back(temp);
                 temp=temp->next;
        }
        int left=0;
        int right=ans.size()-1;
        while(left<right)
        {
            ans[left]->next=ans[right];
            left++;
            if(left==right)
            break;
            ans[right]->next=ans[left];
            right--;
        }
        ans[left]->next=nullptr;
    }
};
