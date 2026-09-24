#include <stdio.h>
int main()
{
    char ch;
    printf("Enter any character");
    scanf("%c",ch);

   if(ch >= 'A' && ch <= 'Z')
   {
    printf("The chqaracter %c is a big case letter\n",ch);
   }
   else if(ch >= 'a' && ch <= 'z')
   {
    printf("The chqaracter %c is a small case letter\n",ch);
   }
   else if(ch >= '1' && ch <= '9')
   {
    printf("The chqaracter %c is a digit\n",ch);
   }
   else
   {
    printf("The chqaracter %c is a special symbol\n",ch);
   }
}