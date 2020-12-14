/**
Question Link - https://leetcode.com/problems/linked-list-cycle/
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
bool hasCycle(struct ListNode *head) {
    struct ListNode *ptr1, *ptr2;
    
    ptr1 = head;
    
    if(ptr1 == NULL || ptr1->next == NULL)
    {
        return false;
    }
    else
    {
        ptr2 = ptr1->next;
        
        while(ptr2 != NULL && ptr1 != ptr2)
        {
            ptr1 = ptr1->next;
            if(ptr2->next != NULL)
                ptr2 = ptr2->next->next;
            else
                return false;
        }
        if(ptr2 == NULL)
            return false;
        if(ptr1 == ptr2)
            return true;
    }
return false;
}
