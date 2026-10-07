#include <stdio.h>
#include <string.h>

struct Organisation{
    char name[50];
    int o_id;
    
    
    struct employee{
        char name[50];
        int emp_id;
        float salary;
        
    }e[2];
};

int main(){

    struct Organisation o[2];

for(int i = 0; i<2;i++){
    
    printf("enter organisation name (%d): ",i+1);
    scanf("%s",o[i].name);

    printf("\nenter organisation ID (%d): ",i+1);
    scanf("%d",&o[i].o_id);

    for(int j = 0; j<2;j++){

        
        printf("\nenter employee name (%d): ",j+1);
        scanf("%s",o[i].e[j].name);

        printf("\nenter employee ID (%d): ",j+1);
        scanf("%d",&o[i].e[j].emp_id);

        printf("\nenter employee salary (%d): ",j+1);
        scanf("%f",&o[i].e[j].salary);


    }
    printf("\n");
}


for(int i = 0 ; i<2 ; i++){

    for(int j = 0; j<2;j++){

        printf("\nemployee %d details are: ",j+1);
        printf("\nname: %s",o[i].e[j].name);
        printf("\nID: %d",o[i].e[j].emp_id);
        printf("\nsalary: %.2f",o[i].e[j].salary);
    }

    printf("\n");
}

    return 0;
}