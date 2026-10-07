#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node* prev;
    struct Node* next;
};

struct Node* createNode(int value)
{
    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));

    if (newNode == NULL)
    {
        printf("No memory available!!");
        exit(1);
    }

    newNode->data = value;
    newNode->prev = NULL;
    newNode->next = NULL;

    return newNode;
}

void insertEnd(struct Node **head1, int value)
{
    struct Node *newNode = createNode(value);

    if(*head1 == NULL)
    {
        *head1 = newNode;
        newNode->next = newNode;
        newNode->prev = newNode;
        return;
    }

    struct Node *head = *head1;
    struct Node *last = head->prev;

    last->next = newNode;
    newNode->prev = last;

    newNode->next = head;
    head->prev = newNode;

}

void printList(struct Node *head)
{
    if(head == NULL)
    {
        printf("List is empty!!");
        return;
    }

    struct Node *temp = head;
    printf("Forward: ");
    do
    {
        printf("%d <-> ",temp->data);
        temp = temp->next;
    }while(temp != head);
    printf("Back to Head\n");
}

void printListRev(struct Node *head)
{
    if(head == NULL)
    {
        printf("List is empty!!");
        return;
    }
    struct Node *last = head->prev;
    struct Node *temp = last;
    printf("Backward: ");
    do
    {
        printf("%d <-> ",temp->data);
        temp = temp->prev;
    }while(temp != last);
    printf("Back to last\n");
}

void freelist(struct Node **head1)
{
    if(*head1 == NULL)
    {
        return;
    }

    struct Node *head = *head1;
    struct Node *temp = head;
    struct Node *newNode;

    do
    {
        newNode = temp->next;
        free(temp);
        temp = newNode;
    }while(temp != head);

    *head1 = NULL;
    printf("All memory cleared!");
}

int main()
{
    struct Node *head = NULL;

    insertEnd(&head,10);
    insertEnd(&head,20);
    insertEnd(&head,30);
    insertEnd(&head,40);
    insertEnd(&head,50);

    printList(head);
    printListRev(head);

    freelist(&head);

    return 0;
}