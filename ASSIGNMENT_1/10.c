#include<stdio.h>
int main ()
{
    int CM,M,P,C,E;
    
    printf("Enter marks of MATHEMATICS out of 200");
    scanf("%d",&M); 

    printf("Enter marks of PHYSICS out of 200");
    scanf("%d",&P);

    printf("Enter marks of CHEMISTRY out of 200");
    scanf("%d",&C);

    printf("Enter marks of ENTRANCE EXAMINATION out of 100");
    scanf("%d",&E);

    CM=(M/2) + (P/2) + (C/2) + E;
    printf("The cutoff marks are %d\n",CM);
}