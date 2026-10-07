#include <stdio.h>
#include <stdlib.h>

struct student{
    
    int marks;
    
};

int random(){
    
    int flag = 0;
    
    for(int i = 0;i<10;i++){
        for(int j = 0 ; j<10;j++){
            
            if(i>j){
                return (10*i + j);
            }
        }
    }
    
}

int main(){
    
    printf("Enter the number of students on class :");
    int n;
    scanf("&d",&n);
    
    struct student s1[n];
    
    for(int i = 0; i<n ; i++){
        
        s1.marks[i] = random();
    }
    
    for(int i = 0; i<n ; i++){
        printf(s1.marks[i]);
    }
    
    
    
    return 0;
}