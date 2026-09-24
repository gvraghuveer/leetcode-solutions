# Problem: Valid Anagram (Easy)

**Link:** https://leetcode.com/problems/valid-anagram/

## Approach

I used a frequency array of size 26 to count the occurrences
of each lowercase letter.

First, I increment the count for every character in the first
string. Then, I decrement the count for every character in the
second string.

If the two strings are anagrams, all frequency counts will be
zero. If any count is not zero, the strings are not anagrams.

## Complexity

- Time: O(n)
- Space: O(1)

## Notes

The solution was tested locally using two test cases: one valid
anagram and one case where the strings are not anagrams. The
solution was then submitted to LeetCode.