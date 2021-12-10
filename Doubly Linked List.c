#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *prev;
    struct node *next;
} * head, *last;

void newlist(int n);
void showlist();
void reverseList();

int main()
{
    int n, data, choice;

    head = NULL;
    last = NULL;

    while (choice != 0)
    {
        printf("============================================\n");
        printf("DOUBLY LINKED LIST PROGRAM\n");
        printf("============================================\n");
        printf("1. Create List\n");
        printf("2. Reverse List\n");
        printf("3. Display list\n");
        printf("0. Exit\n");
        printf("--------------------------------------------\n");
        printf("Enter your choice :- ");

        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("Enter the required number of nodes to be created (must be greater than or equal to 7):-\n");
            scanf("%d", &n);
            if (n < 7)
            {
                printf("List size must be greater than 7.\n");
                return 0;
            }
            else
                newlist(n);
            break;
        case 2:
            reverseList();
            break;
        case 3:
            showlist();
            break;
        case 0:
            break;
        default:
            printf("Invalid choice. Please choose between 0-3");
        }

        printf("\n\n\n");
    }

    return 0;
}

/
    void newlist(int n)
{
    int i, data;
    struct node *newNode;

    if (n >= 1)
    {

        head = (struct node *)malloc(sizeof(struct node));

        printf("Enter data of node 1:- ");
        scanf("%d", &data);

        head->data = data;
        head->prev = NULL;
        head->next = NULL;

        last = head;

        /
            for (i = 2; i <= n; i++)
        {
            newNode = (struct node *)malloc(sizeof(struct node));

            printf("Enter data of node %d: ", i);
            scanf("%d", &data);

            newNode->data = data;
            newNode->prev = last;
            newNode->next = NULL;

            last->next = newNode;
            last = newNode;
        }

        printf("\nDOUBLY LINKED LIST CREATED SUCCESSFULLY\n");
    }
}

/
    void showlist()
{
    struct node *temp;
    int n = 1;

    if (head == NULL)
    {
        printf("List is empty.\n");
    }
    else
    {
        temp = head;
        printf("DATA IN THE LIST:\n");

        while (temp != NULL)
        {
            printf("DATA of node %d = %d\n", n, temp->data);

            n++;

            temp = temp->next;
        }
    }
}

void reverseList()
{
    struct node *current, *temp;

    current = head;
    while (current != NULL)
    {

        temp = current->next;
        current->next = current->prev;
        current->prev = temp;

        current = temp;
    }

    temp = head;
    head = last;
    last = temp;

    printf("LIST REVERSED SUCCESSFULLY.\n");
}
