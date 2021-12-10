#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

void newList(struct node **head, int n);
void printList(struct node *head);
void reverseList(struct node **head);

int main()
{
    int n, response;

    struct node *head = NULL;

    while (response != 0)
    {

        printf("1. Create a circular Linked List\n");
        printf("2. Display the circular Linked list\n");
        printf("3. Reverse replica of the circular Linked list\n");
        printf("0. Exit\n");

        printf("Enter your response : ");
        scanf("%d", &response);

        switch (response)
        {
        case 1:
            printf("Enter the required number of nodes to be created(must be greater than or equal to 7):-\n ");
            scanf("%d", &n);
            if (n < 7)
            {
                printf("List size must be greater than 7.\n");
                return 0;
            }
            newList(&head, n);
            break;

        case 2:
            printList(head);
            getchar();
            getchar();
            break;

        case 3:
            reverseList(&head);
            printf("List reversed.\n");
            getchar();
            getchar();
            break;

        case 0:
            printf("Exiting from application");
            exit(0);
            break;

        default:
            printf("Invalid response. Please choose between 0-3");
        }

        printf("\n\n\n");
    }

    return 0;
}

void reverseList(struct node **head)
{

    struct node *prev, *cur, *next, *last;

    if (*head == NULL)
    {
        printf("Cannot reverse an empty list.\n");
        return;
    }

    last = *head;

    prev = *head;
    cur = (*head)->next;
    *head = (*head)->next;

    while (*head != last)
    {
        *head = (*head)->next;
        cur->next = prev;

        prev = cur;
        cur = *head;
    }

    cur->next = prev;
    *head = prev;
}

void newList(struct node **head, int n)
{
    int i, data;
    struct node *lastNode, *newNode;

    lastNode = NULL;
    newNode = NULL;

    for (i = 1; i <= n; i++)
    {

        newNode = (struct node *)malloc(sizeof(struct node));

        printf("Enter data of node %d: ", i);
        scanf("%d", &data);

        newNode->data = data;
        newNode->next = NULL;

        if (lastNode != NULL)
            lastNode->next = newNode;

        lastNode = newNode;

        if (*head == NULL)
            *head = newNode;
    }

    lastNode->next = *head;

    printf("\nCIRCULAR LINKED LIST CREATED SUCCESSFULLY\n");
}

/**
 * Display node content of circular linked list
 */
void printList(struct node *head)
{
    struct node *current;
    int n = 1;

    // Nothing to print in list
    if (head == NULL)
    {
        printf("List is empty.\n");
        return;
    }

    current = head;
    printf("The data of the linked list are:-\n");

    do
    {
        // Print current node
        printf("Data %d = %d\n", n++, current->data);

        // Move to next node
        current = current->next;
    } while (current != head);
}
