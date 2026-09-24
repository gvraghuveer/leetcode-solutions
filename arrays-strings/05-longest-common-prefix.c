#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* longestCommonPrefix(char** strs, int strsSize)
{
    char *prefix = malloc(strlen(strs[0]) + 1);

    strcpy(prefix, strs[0]);

    for (int i = 1; i < strsSize; i++)
    {
        int j = 0;

        while (prefix[j] != '\0' &&
               strs[i][j] != '\0' &&
               prefix[j] == strs[i][j])
        {
            j++;
        }

        prefix[j] = '\0';
    }

    return prefix;
}

int main()
{
    // Test Case 1 - Typical case
    char *strs1[] = {"flower", "flow", "flight"};

    char *result1 = longestCommonPrefix(strs1, 3);

    printf("Test Case 1: %s\n", result1);

    // Output: fl

    free(result1);


    // Test Case 2 - Edge case: no common prefix
    char *strs2[] = {"dog", "racecar", "car"};

    char *result2 = longestCommonPrefix(strs2, 3);

    printf("Test Case 2: %s\n", result2);

    // Output: empty string

    free(result2);

    return 0;
}