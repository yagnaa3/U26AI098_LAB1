#include <stdio.h>
int main()
{
    //calcuATE grossy salary
    int BASIC, HRA, GROSS_SALARY;
    printf("Enter the basic salary: ");
    scanf("%d", &BASIC);
    printf("Enter the HRA: ");
    scanf("%d", &HRA);
    GROSS_SALARY = BASIC + HRA;
    printf("The gross salary is: %d \n", GROSS_SALARY);
}