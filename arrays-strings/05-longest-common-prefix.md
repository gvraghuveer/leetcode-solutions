# Problem: Longest Common Prefix (Easy)

**Link:** https://leetcode.com/problems/longest-common-prefix/

## Approach

I initially use the first string as the common prefix. I then
compare the prefix with each of the remaining strings character
by character.

Whenever the characters do not match, I shorten the prefix.
After checking all strings, the remaining prefix is the longest
common prefix.

## Complexity

- Time: O(n × m)
- Space: O(m)

## Notes

The solution was tested locally using two test cases: one case
with a common prefix and another case where there is no common
prefix. The solution was then submitted to LeetCode.