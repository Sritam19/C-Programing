#include <stdio.h>
#include <stdlib.h>

typedef struct tmp
{
    int item;
    struct tmp *next;
} Node;

typedef struct
{
    Node *head;
    Node *tail;

} List;

void initList(List *lp)
{
    lp->head = NULL;
    lp->tail = NULL;
}

Node *createNode(int item)
{
    Node *nNode;

    nNode = (Node *)malloc(sizeof(Node));

    nNode->item = item;
    nNode->next = NULL;

    return nNode;
}

void addAtTail(List *lp, int item)
{
    Node *node;
    node = createNode(item);

    //if list is empty.
    if (lp->head == NULL)
    {
        lp->head = node;
        lp->tail = node;
    }
    else
    {
        lp->tail->next = node;
        lp->tail = lp->tail->next;
    }
}

void addAtHead(List *lp, int item)
{
    Node *node;
    node = createNode(item);

    if (lp->head == NULL)
    {
        lp->head = node;
        lp->tail = node;
    }
    else
    {
        node->next = lp->head;
        lp->head = node;
    }
}

void printList(List *lp)
{
    Node *node;

    if (lp->head == NULL)
    {
        printf("\nEmpty List");
        return;
    }

    node = lp->head;

    while (node != NULL)
    {
        printf("| %05d |", node->item);
        node = node->next;

        if (node != NULL)
            printf("--->");
    }
    printf("\n\n");
}

int compareLists(List *lp1, List *lp2)
{
    Node *temp1;
    Node *temp2;
    int flag = 1;

    temp1 = lp1->head;
    temp2 = lp2->head;

    while (temp1 != NULL && temp2 != NULL)
    {
        if (temp1->item != temp2->item)
        {
            flag = 0;
            break;
        }
        temp1 = temp1->next;
        temp2 = temp2->next;
    }

    return flag;
}

int main()
{
    List *lp1;
    List *lp2;

    lp1 = (List *)malloc(sizeof(List));
    lp2 = (List *)malloc(sizeof(List));

    initList(lp1);
    initList(lp2);

    addAtTail(lp1, 100);
    addAtTail(lp1, 200);
    addAtHead(lp1, 300);
    addAtHead(lp1, 400);
    addAtHead(lp1, 500);

    addAtTail(lp2, 100);
    addAtTail(lp2, 200);
    addAtHead(lp2, 300);
    addAtHead(lp2, 400);
    addAtHead(lp2, 500);

    printf("List1:\n");
    printList(lp1);

    printf("List2:\n");
    printList(lp2);

    if (compareLists(lp1, lp2))
        printf("Both lists are same \n");
    else
        printf("Lists are not same\n");

    return 0;
}