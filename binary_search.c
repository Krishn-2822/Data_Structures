#include <stdio.h>

int main(){
    int a[25];
    int n;
    printf("Enter the number of elements you want:");
    scanf("%d",&n);
    for(int i=0; i<n; i++){
        printf("Enter element %d: ", i+1);
        scanf("%d", &a[i]);
    }
    int target;
    printf("Enter the target element to search: ");
    scanf("%d", &target);

    int l=0,r=n-1,m;
    for(int i=0;i<10;i++){
        m=(l+r)/2;
        if(target==a[m]){
            printf("Element found at index: %d",m);
            break;
        }else if(target>a[m]){
            l=m+1;
        }else{
            r=m-1;
        }
    }
    return 0;
}