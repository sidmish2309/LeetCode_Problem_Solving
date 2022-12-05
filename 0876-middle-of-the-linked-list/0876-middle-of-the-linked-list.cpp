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
    ListNode* middleNode(ListNode* head) {
     //rabbit and tortoise method
        int len=0;
        ListNode* it=head;
        while(it)
        {
            len++;
            it=it->next;
        }
        it=head;
        
        for(int i=0; i<len/2; i++) it=it->next;
        
        return it;
    }
};