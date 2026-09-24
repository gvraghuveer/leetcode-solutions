# Problem: Binary Search (Easy)

**Link:** https://leetcode.com/problems/binary-search/

## Approach

I used binary search to find the target element in the sorted
array.

I maintained two pointers, `left` and `right`, representing the
current search range. I calculated the middle index and compared
the middle element with the target.

If the middle element was smaller than the target, I searched the
right half. If it was larger, I searched the left half. If the
middle element matched the target, I returned its index.

If the target was not found, I returned -1.

## Complexity

- Time: O(log n)
- Space: O(1)

## Notes

The solution was tested locally using two test cases: one where
the target is present and another where the target is not present.
The solution was then submitted to LeetCode.