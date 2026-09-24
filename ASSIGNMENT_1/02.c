#include<stdio.h>
int main()
{
    int m1,m2,m3,m4,m5;
    printf("Enter the marks of 1st subject :");
    scanf("%d",&m1);

    printf("Enter the marks of 2nd subject :");
    scanf("%d",&m2);

    printf("Enter the marks of 3rd subject :");
    scanf("%d",&m3);

    printf("Enter the marks of 4th subject :");
    scanf("%d",&m4);

    printf("Enter the marks of 5th subject :");
    scanf("%d",&m5);


    printf("The total marks is : %d \n", m1+m2+m3+m4+m5);

    printf("The Percentage is : %d \n", (m1+m2+m3+m4+m5)/5);

}