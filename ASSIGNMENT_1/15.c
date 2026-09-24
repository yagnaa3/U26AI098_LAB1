#include<stdio.h>
int main()
{
    int s1,s2,s3,s4,s5,percentage;
    printf("Enter marks of five subject(out of 100) : ");
    scanf("%d%d%d%d%d",&s1,&s2,&s3,&s4,&s5);

    percentage  =(s1+s2+s3+s4+s5)/5;
    printf("The total maarks of five subject is %d \n",(s1+s2+s3+s4+s5));
    printf("The percentage is %d \n",percentage);

   if(percentage>=80){
    printf("First division\n");
   }
   else if(percentage>=65){
    printf("Second division\n");
   }
   else if(percentage>=50){
    printf("Third division\n");
   }
   else{
    printf("Fail\n");
   }
}