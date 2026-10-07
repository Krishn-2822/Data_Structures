//2 Sorted linked list
#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

struct Node* createNode(int data)
{
     struct Node* newNode = (struct node*)malloc(sizeof(struct Node));
     newNode->data = data;
     newNode->next = NULL;

     return newNode;
}

void insertEnd(struct Node** head ,int data )
{
    struct Node* newNode = createNode(data);

    if(*head == NULL)
    {
        *head = newNode;
        return;
    }
    
    struct Node* temp = *head;
    while(temp->next !=NULL)
    {
        temp = temp->next;
    }
    temp->next = newNode;
}

struct Node* mergeList(struct Node* A,struct Node* B)
{
    struct Node* result = NULL;
    struct Node* temp = NULL;

    while(A != NULL && B != NULL)
    {
        if(A->data <= B->data)
        {
            insertEnd(&result,A->data);
            A = A->next;
        }
        else
        {
            insertEnd(&result,B->data);
            B = B->next;
        }
    }
    while (A!=NULL)
    {
        insertEnd(&result,A->data);
        A = A->next;
    }
    
    while (A!=NULL)
    {
        insertEnd(&result,B->data);
        B = B->next;
    }
    return result;
}

void display(struct Node* head)
{
    while(head!=NULL)
    {
        printf("%d -> ",head->data);
        head = head->next;
    }
    printf("NULL \n");
}

int main()
{
    struct Node* A = NULL;
    struct Node* B = NULL;
    struct Node* merged = NULL;

    int n1,n2,value;

    printf("Enter number of elements in list A: ");
    scanf("%d",&n1);

    printf("Enter elements of list A in sorted order:\n");

    for(int i = 0 ; i<n1 ; i++)
    {
        scanf("%d",&value);
        insertEnd(&A , value);
    }

    printf("Enter number of elements in list B: ");
    scanf("%d",&n1);

    printf("Enter elements of list B in sorted order:\n");

    for(int i = 0 ; i<n2 ; i++)
    {
        scanf("%d",&value);
        insertEnd(&B , value);
    }

    merged = mergeList(A,B);
    printf("\nList A: ");
    display(A);

    printf("\nList B: ");
    display(B);

    printf("\nMerged List: ");
    display(merged);

    return 0;

}