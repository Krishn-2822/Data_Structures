#include <stdio.h>
#include <stdlib.h>

struct root{
    int info;
    struct root* left;
    struct root* right;
};
struct root* createNode(int info)
{
     struct root* newNode = (struct root*)malloc(sizeof(struct root));
     newNode->info = info;
     newNode->left = NULL;
     newNode->right = NULL;

     return newNode;
}

void addLeft(struct root** start ,int data )
{
    
}

void addRight(int data)
{

}

int main()
{
    int arr[10];
    int choice,data;
    struct root* A = NULL;

    while(1)
    {
        printf("\n-------------------");
        printf("\n        MENU       ");
        printf("\n-------------------");
        printf("\n1.Add Left");
        printf("\n2.Add Right");
        printf("\n3.Number of roots");
        printf("\n4.Display Preorder");
        printf("\n5.Display inorder");
        printf("\n6.Display Postorder");
        printf("\n7.Exit");
        printf("\n-------------------");
        printf("\nEnter your choice:");
        scanf("%d",&choice);

        if(choice == 1){
            printf("Enter the value of Left node:");
            scanf("%d",&data);
            struct Node* newNode = createNode(data);
            if(newNode->left == NULL)
            {

            }
        }else if(choice == 2){
            printf("Enter the value of Right node:");
            scanf("%d",&data);
            struct Node* newNode = createNode(data);
        }else if(choice == 3){

        }else if(choice == 4){

        }else if(choice == 5){

        }else if(choice == 6){

        }else if(choice == 7){
            printf("Program is executed Completely!");
            return 0;
        }else{
            printf("-----------------");
            printf("Enter valid input");
            printf("-----------------");
        }
    }

}