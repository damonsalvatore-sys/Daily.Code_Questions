#include <stdio.h>
#include <stdlib.h>

/*
Question 15:
Write a C program to detect whether a cycle is present
in a linked list. Also perform complexity analysis.

Time Complexity: O(n)
Space Complexity: O(1)
*/

struct Node
{
    int data;
    struct Node *next;
};

int detectCycle(struct Node *head)
{
    struct Node *slow = head;
    struct Node *fast = head;

    while (fast != NULL && fast->next != NULL)
    {
        slow = slow->next;
        fast = fast->next->next;

        if (slow == fast)
            return 1;
    }

    return 0;
}

int main()
{
    struct Node *first = malloc(sizeof(struct Node));
    struct Node *second = malloc(sizeof(struct Node));
    struct Node *third = malloc(sizeof(struct Node));

    first->data = 10;
    second->data = 20;
    third->data = 30;

    first->next = second;
    second->next = third;
    third->next = second;       // Creates a cycle

    if (detectCycle(first))
        printf("Cycle detected");
    else
        printf("No cycle detected");

    return 0;
}
