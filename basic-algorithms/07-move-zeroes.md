# Problem: Move Zeroes (Easy)

**Link:** https://leetcode.com/problems/move-zeroes/

## Approach

I used a position pointer to keep track of where the next
non-zero element should be placed.

I traversed the array and moved every non-zero element toward
the beginning of the array while maintaining its original order.

After all non-zero elements were placed, I filled the remaining
positions with zeroes.

## Complexity

- Time: O(n)
- Space: O(1)

## Notes

The solution was tested locally using two test cases: one typical
case containing zeroes and non-zero values, and one edge case
where all elements are zero. The solution was then submitted to
LeetCode.