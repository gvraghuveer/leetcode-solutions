#include <stdio.h>
#include <stdbool.h>

bool isAnagram(char *s, char *t)
{
    int count[26] = {0};

    for (int i = 0; s[i] != '\0'; i++)
    {
        count[s[i] - 'a']++;
    }

    for (int i = 0; t[i] != '\0'; i++)
    {
        count[t[i] - 'a']--;
    }

    for (int i = 0; i < 26; i++)
    {
        if (count[i] != 0)
        {
            return false;
        }
    }

    return true;
}

int main()
{
    // Test Case 1 - Typical case
    char s1[] = "anagram";
    char t1[] = "nagaram";

    printf("Test Case 1: %s\n",
           isAnagram(s1, t1) ? "true" : "false");

    // Output: true


    // Test Case 2 - Not an anagram
    char s2[] = "rat";
    char t2[] = "car";

    printf("Test Case 2: %s\n",
           isAnagram(s2, t2) ? "true" : "false");

    // Output: false

    return 0;
}