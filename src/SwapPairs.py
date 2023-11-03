from typing import Optional, ListNode

# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def swapPairs(self, head: Optional[ListNode]) -> Optional[ListNode]:
        cur = head
        if cur is not None and cur.next is not None:
            head = cur.next 
        prev = None
        
        while cur is not None and cur.next is not None:
            temp = cur.next
            cur.next = cur.next.next
            temp.next = cur
            
            if prev is not None:
                prev.next = temp

            prev = cur
            cur = cur.next

        return head