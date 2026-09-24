#include<stdio.h>
int main()
{
    //Temperature conversion from farenheit to Celsius
    float f,c;
    printf("Enter the temperature in farenheit: ");
    scanf("%f",&f);
    c = (f-32)*5/9;
    printf("The temperature in Celsius is: %.4f \n", c);
}