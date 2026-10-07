//Insertion sort
#include <stdio.h>

int main()
{
    
    int a[20],t,n;
    printf("Enter size of Array :");
    scanf("%d",&n);
    for(int i = 0 ; i<n;i++)
    {
        printf("Enter element %d :",i+1);
        scanf("%d",&a[i]);
    }
    for(int k = 0;k<n;k++)
        {
            printf("%d ",a[k]);
        }
    for(int i = 0;i<n;i++)
    {
        for(int j = i;j>0;j--)
        {
            if(a[j]<a[j-1])
            {
                printf("\n");
                t = a[j];
                a[j]=a[j-1];
                a[j-1] = t;
                for(int k = 0;k<n;k++)
                {
                    printf("%d ",a[k]);
                }
            }
        }
    }
    printf("Final sorted array is: ");
    for(int k = 0;k<n;k++)
    {
        printf("%d ",a[k]);
    }
    
    return 0;
}