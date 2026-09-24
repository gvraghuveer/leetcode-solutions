#include <stdio.h>
#include <stdbool.h>
#include <string.h>

bool isValid(char *s)
{
    char stack[10000];
    int top = -1;

    for (int i = 0; s[i] != '\0'; i++)
    {
        if (s[i] == '(' || s[i] == '[' || s[i] == '{')
        {
            stack[++top] = s[i];
        }
        else
        {
            if (top == -1)
            {
                return false;
            }

            char open = stack[top--];

            if ((s[i] == ')' && open != '(') ||
                (s[i] == ']' && open != '[') ||
                (s[i] == '}' && open != '{'))
            {
                return false;
            }
        }
    }

    return top == -1;
}

int main()
{
    // Test Case 1 - Typical case
    char s1[] = "()[]{}";

    printf("Test Case 1: %s\n", isValid(s1) ? "true" : "false");

    // Output: true


    // Test Case 2 - Edge case: mismatched brackets
    char s2[] = "(]";

    printf("Test Case 2: %s\n", isValid(s2) ? "true" : "false");

    // Output: false

    return 0;
}