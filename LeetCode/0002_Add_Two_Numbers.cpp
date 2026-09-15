
            if (l2 != nullptr) {
                sum += l2->val;
                l2 = l2->next;
            }

            curr->next = new ListNode(sum % 10);

            carry = sum / 10;

            curr = curr->next;
        }

        return dummy->next;
    }
};
