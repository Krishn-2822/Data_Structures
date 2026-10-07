// Selection sort
#include <stdio.h>

int main()
{
    int n,min,t;
    printf("Enter No. of elements(1 - 20): ");
    scanf("%d",&n);
    int a[20];
    for(int h = 0;h<n;h++)
    {
        printf("Enter element no. %d : ",h+1);
        scanf("%d",&a[h]);
    }
    for(int i = 0;i<n;i++)
    {
        min = a[i];
        for(int j = i+1;j<n;j++)
        {
            if(min == a[j])
            {
                continue;
            }else if(min > a[j]){
                min = a[j];
                
                t=a[j];
                a[j]=a[i];
                a[i]=t;
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