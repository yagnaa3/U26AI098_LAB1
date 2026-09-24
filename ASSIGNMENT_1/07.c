#include<stdio.h>
int main()
{
    int base,height;
    
    printf("Enter the value of base : ");
    scanf("%d",&base);
    
    printf("Enter the value of height :");
    scanf("%d",&height);

    printf("The area of the triangle is %d \n",(base*height)*1/2);
}