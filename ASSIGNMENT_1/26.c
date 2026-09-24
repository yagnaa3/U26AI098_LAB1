#include<stdio.h>
int main()
{
    int even=0,odd=0,n,i;
    printf("Enter n :");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        if(i % 2 == 0){
        even = even + i;}
        else{
            odd = odd + i;

        }
        
    }
    printf("Sum of even numbers is : %d\n",even);
    printf("Sum of odd numbers is : %d\n",odd);
}