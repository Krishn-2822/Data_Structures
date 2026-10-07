#include <stdio.h>

int flag = 0;
int f = -1;
int r = -1;
int n;
int q[50];

void insertRear()
{
    int item;
    if(f == -1 && r == -1){
        f=0;
        r=0;
    }else if(f == (r+1)%n && flag == 0){
        printf("Queue is overflowing!!!");
        return;
    }else{
        r = (r+1)%n;
    }
    printf("Enter element to insert: ");
    scanf("%d",&item);
    q[r] = item;

    flag = 0;


}

void insertFront()
{
    int item;
    if(f == -1 && r == -1){
        f=0;
        r=0;
    }else if(f == (r+1)%n && flag == 0){
        printf("Queue is overflowing!!!");
        return;
    }else{
        if(f ==0){
            f = n-1;
        }else{
            f = f-1;
        }
    }
    printf("Enter element to insert: ");
    scanf("%d",&item);
    q[f] = item;

    flag = 1;

}

void deleteFront()
{
    
    int item;
    if(f == -1 && r == -1 || ((f == (r+1)%n) && flag == 1)){
        printf("Queue is empty!!");
        return;
    }else if(f == r){
        item = q[f];
        f = -1;
        r = -1;
    }else if(f == (r+1)%n){
        item = q[f];
        f = (f+1)%n;
    }else{
        item = q[f];
        f = (f+1)%n;
    }

    flag = 1;

}

void deleteRear()
{
    int item;
    if(f == -1 && r == -1 || ((f == (r+1)%n) && flag == 1)){
        printf("Queue is empty!!");
        return;
    }else if(f == r){
        item = q[f];
        f = -1;
        r = -1;
    }else if(f == (r+1)%n){
        item = q[f];
        f = (f+1)%n;
    }else{
        item = q[r];
        if(r == 0){
            r = n-1;
        }else{
            r = r-1;
        }
    }


    flag = 1;

}

void display()
{
    if(f == -1){
        printf("Queue is empty!!");
        return;
    }else if(f < r || f==r){
        for(int i = f ; i <= r ;i++)
        {
            printf("%d ",q[i]);
        }
    }else{
        for(int i = f ; i < n ;i++)
        {
            printf("%d ",q[i]);
        }
        for(int i = 0 ; i <= r ;i++)
        {
            printf("%d ",q[i]);
        }        
    }
    
    
}

int main()
{

    printf("Enter size of array(0-50): ");
    scanf("%d", &n);
    if(n>50)
    {
        printf("Enter valid size\n");
        main();
    }

    int c;

    while(1)
    {

        printf("\n1. Insert_Front");
        printf("\n2. Insert_Rear");
        printf("\n3. Delete_Front");
        printf("\n4. Delete_Rear");
        printf("\n5. Display");
        printf("\n6. Exit");

        printf("\nEnter your choice: ");
        scanf("%d",&c);


        if(c == 1){
            insertFront();
        }else if(c == 2){
            insertRear();
        }else if(c ==3){
            deleteFront();
        }else if(c == 4){
            deleteRear();
        }else if(c == 5){
            display();
        }else if(c == 6){
            break;
        }
    }

    return 0;

}