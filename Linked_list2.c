#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

int main()
{
    struct Node *head;
    struct Node *second;
    struct Node *third;
    struct Node *newNode;

    head = (struct Node*)malloc(sizeof(struct Node));
    second = (struct Node*)malloc(sizeof(struct Node));
    third = (struct Node*)malloc(sizeof(struct Node));

    head->data = 10;
    second->data = 20;
    third->data = 30;

    head->next = second;
    second->next = third;
    third->next = NULL;

    struct Node *temp = head;

    printf("Linked list before Deleting:");

    while(temp != NULL)
    {
        printf("%d -> ",temp->data);
        temp = temp->next;
    }
    temp = head;
    printf("NULL\n");

    head->next = third;
    second->next = NULL;
    free(second);

    printf("Linked list after Deleting:");

    while(temp != NULL)
    {
        printf("%d -> ",temp->data);
        temp = temp->next;
    }
    printf("NULL");

    free(temp);
    free(head);
    free(third);

}