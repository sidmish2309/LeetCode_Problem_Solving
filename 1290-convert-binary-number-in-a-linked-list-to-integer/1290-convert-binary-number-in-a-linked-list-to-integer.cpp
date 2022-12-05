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
    int getDecimalValue(ListNode* head) {
        int ans=0;
        ListNode* it=head;
        int len=0;
        while(it)
        {
            len++;
            it=it->next;
        }
        
        len--;
        it=head;
        while(it)
        {
            if(it->val==1) ans+=pow(2,len);
            it=it->next;
            len--;
        }
        return ans;
    }
};