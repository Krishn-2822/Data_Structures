#include <stdio.h>


int main()
{
    int a[20],top=0,n;
    printf("Enter no of Elements of Stack:  ");
    scanf("%d",&n);
    top = n;

    for(int i = 0 ; i<n ; i++)
    {
        if(n>50 || n<1)
        {
            printf("enter number between 1 and 50");
            return 0;
        }
        printf("Enter element no %d : ",i+1);
        scanf("%d",&a[i]);
    }

    int choice;

    while (1)
    {
        printf("\nEnter your choice :\n");
        printf("1. Push\n");
        printf("2. Pop\n");
        printf("3. Display\n");
        printf("4. Exit\n");
        printf("your choice:");
        scanf("%d",&choice);

        if(choice == 1){
            if(top == 50){
                printf("Stack is Overflowing!!! CANNOT PUSH!!!");

            }else{
                printf("\nEnter element to push:");
                scanf("%d",&a[top]);
                printf("Element %d is pushed to Stack at index %d\n",a[top],top);
                top++;
            }
        }else if(choice == 2){
            if(top<1){
                printf("Stack is empty!! CANNOT POP!!!");
            }else{
                top--;
                printf("Element %d popprd from index %d", a[top],top);
            }
        }else if(choice == 3){
            printf("Final Stack is:\n");
            for(int i = top-1 ; i>=0 ;i--)
            {
                printf("%d\n",a[i]);
            }
        }else if(choice == 4){
            break;
        }else{
            printf("\nEnter valid input!!!");
        }
    }
}