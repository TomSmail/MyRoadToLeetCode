/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* removeNthFromEnd(struct ListNode* head, int n){
    int length = 0;
    struct ListNode* curr = head; 
    while(curr->next) {
        curr = curr->next;
        length ++;
    }
    // special case
    if (length == 0) { 
        return NULL;
    }

    printf("%d\n", length);
    int n_start = length - n;
    
    int i = 0;
    struct ListNode* prev = head;
    curr = head->next;

    if (n_start == -1) {
        head = head->next;
        printf("%s", "here");
        return head;
        
    }

    while (i < n_start) {
        printf("next: %d\n", curr->val);
        prev = curr; 
        curr = curr->next;
        i++;
    }

    prev->next = curr->next;
    
    return head;
}