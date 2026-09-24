#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter the value of a and b before swapping is :");
    scanf("%d%d",&a,&b);
    c=a;
    a=b;
    b=c;
    printf("The value of a and b is : %d and %d",a,b);
}