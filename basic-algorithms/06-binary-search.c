#include <stdio.h>

int search(int *nums, int numsSize, int target)
{
    int end = numsSize - 1;
    int start = 0;
    while(start<=end){
        int mid = (start + end) / 2;
        if(nums[mid] == target){
            return mid;
        }
        else if(nums[mid] < target) {
            start = mid + 1;
        }
        else{end = mid - 1;}
    }

    return -1;
}

int main()
{
    // Test Case 1 - Typical case
    int nums1[] = {-1, 0, 3, 5, 9, 12};

    printf("Test Case 1: %d\n",
           search(nums1, 6, 9));

    // Output: 4

    // Test Case 2 - Edge case: target not found
    int nums2[] = {-1, 0, 3, 5, 9, 12};

    printf("Test Case 2: %d\n",
           search(nums2, 6, 2));

    // Output: -1

    return 0;
}