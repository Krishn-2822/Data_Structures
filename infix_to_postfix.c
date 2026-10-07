#include <stdio.h>
#include <string.h>

int top=0;
char stack[100];
int pop(char a)
{
    printf("Hello");

    printf("%c,",a);

    return 0;
}
int precidence(char a)
{
    if(a == '^'){
        return 3;
    }else if(a == '*' || a == '/'){
        return 2;
    }else if(a == '+' || a == '-'){
        return 1;
    }else{
        return 0;
    }
}
int push(char x)
{
    int a = precidence(x);
    int b = precidence(stack[top]);

    if(a<b){
        stack[top] = x;
        top++;
    }else{
        for(int i = top ; i>-1 ; i--)
        {
            pop(stack[i]);
        }
    }

    return 0;
}


int main()
{
    char s[100];
    printf("Enter equation(Without spaces): ");
    scanf("%99s", s);

    int len = strlen(s);
    printf("Number of elements entered: %d\n", len);

    
    for(int i = 0 ; i < len ; i++)
    {
        if(s[i] >= 'a' && s[i]<='z')
        {
            printf("%c,",s[i]);
        }else if(s[i] == '+' || s[i] == '-' || s[i] == '*' || s[i] == '/' || s[i] == '^' || s[i] == '(' || s[i] == ')')
        {
            push(s[i]);
        }
    }


    return 0;
}