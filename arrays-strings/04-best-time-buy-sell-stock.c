#include <stdio.h>

int maxProfit(int *prices, int pricesSize)
{
    int minPrice = prices[0];
    int maxProfit = 0;

    for (int i = 1; i < pricesSize; i++)
    {
        if (prices[i] < minPrice)
        {
            minPrice = prices[i];
        }
        else
        {
            int profit = prices[i] - minPrice;

            if (profit > maxProfit)
            {
                maxProfit = profit;
            }
        }
    }

    return maxProfit;
}

int main()
{
    // Test Case 1 - Profit is possible
    int prices1[] = {7, 1, 5, 3, 6, 4};

    printf("Test Case 1: %d\n",
           maxProfit(prices1, 6));

    // Output: 5


    // Test Case 2 - No profit possible
    int prices2[] = {7, 6, 4, 3, 1};

    printf("Test Case 2: %d\n",
           maxProfit(prices2, 5));

    // Output: 0

    return 0;
}