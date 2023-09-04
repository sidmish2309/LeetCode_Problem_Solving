/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    bool hasCycle(ListNode *head) {
        ListNode *s=head;
        ListNode *f=head;
        
        while(f && f ->next)
        {
            f = f->next->next;
            s = s->next;
            
			
			// At the point if fast and slow are at same address
			// this means linked list has a cycle in it.
            if(f == s)
                return true;
        }
        
        return false;
    }
};