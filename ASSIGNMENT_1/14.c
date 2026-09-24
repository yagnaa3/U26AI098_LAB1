#include <stdio.h>

int main()
{
    char ch;

    printf("enter any character: ");
    scanf("%c", &ch);

    if (ch >= 'A' && ch <= 'Z')
    {
        printf("capital letter\n");
    }
    else if (ch >= 'a' && ch <= 'z')
    {
        printf("small letter\n");
    }
    else if (ch >= '0' && ch <= '9')
    {
        printf("digit\n");
    }
    else
    {
        printf("special symbol\n");
    }
}
