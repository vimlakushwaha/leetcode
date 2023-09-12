# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def partition(self, head: Optional[ListNode], x: int) -> Optional[ListNode]:
        f,s = head,head
        while s and s.next:
            if s.next.val >= x:
                s = s.next
            else:
                temp = s.next
                s.next = temp.next
                if f == head and f.val >= x:
                    temp.next = head
                    head = temp
                    f = head
                else:
                    if f == s:
                  
                        temp.next = f.next
                        f.next = temp 
                        s = f = f.next
                    else:
                        temp.next = f.next
                        f.next = temp 
                        f = f.next
                
                
        #f.next = s
        return head  
                 

                    

 
        