#include <stdio.h>

void moveZeroes(int *nums, int numsSize)
{
    int position = 0;

    for (int i = 0; i < numsSize; i++)
    {
        if (nums[i] != 0)
        {
            nums[position] = nums[i];
            position++;
        }
    }

    while (position < numsSize)
    {
        nums[position] = 0;
        position++;
    }
}

int main()
{
    // Test Case 1 - Typical case
    int nums1[] = {0, 1, 0, 3, 12};

    moveZeroes(nums1, 5);

    printf("Test Case 1: ");

    for (int i = 0; i < 5; i++)
    {
        printf("%d ", nums1[i]);
    }

    printf("\n");

    // Output: 1 3 12 0 0

    // Test Case 2 - Edge case: all zeroes
    int nums2[] = {0, 0, 0};

    moveZeroes(nums2, 3);

    printf("Test Case 2: ");

    for (int i = 0; i < 3; i++)
    {
        printf("%d ", nums2[i]);
    }

    printf("\n");

    // Output: 0 0 0

    return 0;
}