#include<stdio.h>
int main()
{
    int i;
    printf("Enter any value :");
    scanf("%d",&i);


    if(i % 2 == 0)
    {
        printf("The no. %d is even\n",i);
    }
    else {
        printf("The no. %d is odd\n",i);
    }
}