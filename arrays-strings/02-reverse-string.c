#include <stdio.h>

void reverseString(char *s, int sSize){
    char *left = s;
    char *right = s + sSize - 1;

    while (left < right){
        char temp = *left;
        *left = *right;
        *right = temp;

        left++;
        right--;
    }
}

int main(){
    // Test Case 1
    char str1[] = "hello";

    reverseString(str1, 5);

    printf("Test Case 1: %s\n", str1);

    // Output: olleh


    // Test Case 2 - Edge case
    char str2[] = "a";

    reverseString(str2, 1);

    printf("Test Case 2: %s\n", str2);

    // Output: a

    return 0;
}