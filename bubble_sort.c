//Bubble sort
#include <stdio.h>

int main() {
    
    int a[20],t,n;
    printf("Enter no of elements you want to sort: ");
    scanf("%d",&n);

    for(int i = 0;i<n;i++)
    {
        printf("Enter element %d: ",i+1);
        scanf("%d",&a[i]);
    }


    for(int j = 0;j<n-1;j++){
        for(int i =0;i<n-j-1;i++)
        {
            if(a[i]>a[i+1])
            {
                t = a[i];
                a[i]=a[i+1];
                a[i+1] = t;
                for(int k = 0;k<n;k++)
                {
                    printf("%d ",a[k]);
                }
            printf("\n");
            }
        }
    }
    printf("Final sorted array is: ");
    for(int k = 0;k<n;k++)
    {
        printf("%d ",a[k]);
    }
    printf("\n");
}