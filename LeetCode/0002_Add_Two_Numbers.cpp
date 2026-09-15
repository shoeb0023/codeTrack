        carry != 0:
            total_sum = carry
            
            if l1 is not None:
                total_sum += l1.val
                l1 = l1.next
                
            if l2 is not None:
                total_sum += l2.val
                l2 = l2.next
                
            curr.next = ListNode(total_sum % 10)
            carry = total_sum // 10
            curr = curr.next
            
        return dummy.next
