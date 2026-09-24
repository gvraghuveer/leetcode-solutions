# Problem: Valid Parentheses (Easy)

**Link:** https://leetcode.com/problems/valid-parentheses/

## Approach

I used a stack to keep track of opening brackets.

Whenever an opening bracket is encountered, it is pushed onto
the stack. When a closing bracket is encountered, I check whether
it matches the most recently added opening bracket.

If the brackets do not match, the string is invalid.

After processing the complete string, the string is valid only
if the stack is empty.

## Complexity

- Time: O(n)
- Space: O(n)

## Notes

The solution was tested locally using two test cases: one valid
sequence containing different types of brackets and one sequence
with mismatched brackets. The solution was then submitted to
LeetCode.