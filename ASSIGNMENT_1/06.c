#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter the value of a and b before swapping is :");
    scanf("%d%d",&a,&b);
    a = a + b;
    b = a - b;
    a = a - b;
    printf("The value of a and b is : %d and %d \n",a,b);
}
