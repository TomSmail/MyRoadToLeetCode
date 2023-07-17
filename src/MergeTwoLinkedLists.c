struct ListNode* mergeTwoLists(struct ListNode* list1, struct ListNode* list2){
    struct ListNode* head;
    struct ListNode* curr = head;
    struct ListNode* curr1 = list1;
    struct ListNode* curr2 = list2;
    while (curr1->next && curr2->next) {
        if (curr1->val < curr2->val) {
            curr->next = curr1;
            curr = curr->next;
            curr1 = curr1->next;
        } else {
            curr->next;
            curr = curr->next;
            curr2 = curr2->next;
        }
    }
    // adds the remainder 
    if (curr1->next) {
        curr->next = curr1;
    } else if (curr2->next) {
        curr->next = curr2;
    } else {
        printf("Something has gone wrong!")
    }
    // might want to return head->next;
    return head;
}
