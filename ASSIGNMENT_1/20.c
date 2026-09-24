#include<stdio.h>
int main()
{
    char ch;
    int a,b;

    printf("Enter the  character (+,-,*,/): ");
    scanf("%c",&ch);

    printf("Enter two numbers : ");
    scanf("%d%d",&a,&b);

    switch(ch)
    {
    case '+':
        printf("Addition of %d and %d is : %d",a,b,a+b);
        break;
    case '-':
        printf("Subtraction of %d and %d is : %d",a,b,a-b);
        break;
    case '*':
        printf("Multiplication of %d and %d is : %d",a,b,a*b);
        break;
    case '/':
        if(b!=0)
            printf("Division of %d and %d is : %d",a,b,a/b);
        else
            printf("Division by zero is not allowed.");
}
}