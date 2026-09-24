# Problem: Best Time to Buy and Sell Stock (Easy)

**Link:** https://leetcode.com/problems/best-time-to-buy-and-sell-stock/

## Approach

I used a single-pass approach while keeping track of the
minimum price seen so far.

For each price, I calculate the possible profit by subtracting
the minimum price from the current price. I keep updating the
maximum profit whenever a larger profit is found.

This ensures that the stock is bought before it is sold.

## Complexity

- Time: O(n)
- Space: O(1)

## Notes

The solution was tested locally using two test cases: one where
a profit is possible and another where the prices continuously
decrease. The solution was then submitted to LeetCode.