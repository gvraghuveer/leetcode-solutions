#include <stdio.h>
#include <stdlib.h>

struct ListNode
{
    int val;
    struct ListNode *next;
};

struct ListNode* reverseList(struct ListNode* head)
{
    struct ListNode *previous = NULL;
    struct ListNode *current = head;

    while (current != NULL)
    {
        struct ListNode *next = current->next;

        current->next = previous;

        previous = current;
        current = next;
    }

    return previous;
}

void printList(struct ListNode *head)
{
    while (head != NULL)
    {
        printf("%d ", head->val);
        head = head->next;
    }

    printf("\n");
}

int main()
{
    // Test Case 1 - Typical case
    struct ListNode node1 = {1, NULL};
    struct ListNode node2 = {2, NULL};
    struct ListNode node3 = {3, NULL};
    struct ListNode node4 = {4, NULL};
    struct ListNode node5 = {5, NULL};

    node1.next = &node2;
    node2.next = &node3;
    node3.next = &node4;
    node4.next = &node5;

    struct ListNode *result1 = reverseList(&node1);

    printf("Test Case 1: ");
    printList(result1);

    // Output: 5 4 3 2 1


    // Test Case 2 - Edge case: single node
    struct ListNode node6 = {1, NULL};

    struct ListNode *result2 = reverseList(&node6);

    printf("Test Case 2: ");
    printList(result2);

    // Output: 1

    return 0;
}