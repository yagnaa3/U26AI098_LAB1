#include<stdio.h>
int main()
{
    char ch;

    printf("enter a character: ");
    scanf("%c", &ch);

    (ch >= 'a' && ch <= 'z') ? printf("it is small letter\n") : printf("not a small letter\n");
}
