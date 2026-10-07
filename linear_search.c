#include <stdio.h>

int main() {
    int a[10];
    for(int i=0; i<10; i++){
        printf("Enter element %d: ", i+1);
        scanf("%d", &a[i]);
    }
    int target;
    printf("Enter the target element to search: ");
    scanf("%d", &target);
    for(int i =0;i<10;i++){
        if (a[i] == target)
        {
            printf("Element found at index %d\n", i);
            break;
        }
        if(i==9){
                printf("Element not found\n");
            }
        
    }

    return 0;
}