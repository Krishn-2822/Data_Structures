#include <stdio.h>

int main() {

    printf("Enter the number of elements in the array :");
    int n;
    scanf("%d", &n);
    int a[100],t;
    printf("Enter the elements of the array :\n");
    for(int i = 0;i<n;i++)
    {
        scanf("%d", &a[i]);
    }
    for(int j = 0;j<n-1;j++){
        for(int i =0;i<n-j-1;i++)
        {
            if(a[i]>a[i+1])
            {
                t = a[i];
                a[i]=a[i+1];
                a[i+1] = t;
            }
        }
    }
    printf("sorted array is :");
    for(int k = 0;k<n;k++)
    {
        printf("%d ",a[k]);
    }
    printf("\n");

    printf("largest element is : %d\n",a[n-1]);
    printf("second largest element is : %d\n",a[n-2]);
    printf("smallest element is : %d\n",a[0]);
    printf("second smallest element is : %d\n",a[1]);
}