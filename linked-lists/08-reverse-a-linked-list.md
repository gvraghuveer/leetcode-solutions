# Bonus Problem: Reverse Linked List

**Link:** https://leetcode.com/problems/reverse-linked-list/

## Approach

I used three pointers: `previous`, `current`, and `next`.

For each node, I first store the next node so that the rest of
the linked list is not lost. I then reverse the current node's
link to point to the previous node.

Finally, I move the pointers forward and continue until the end
of the linked list is reached.

The `previous` pointer becomes the new head of the reversed list.

## Complexity

- Time: O(n)
- Space: O(1)

## Notes

The solution was tested locally using two test cases: a linked
list containing multiple nodes and a single-node edge case.
The solution was then submitted to LeetCode.