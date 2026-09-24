#include <stdio.h>
int main() 
{
    int x, n;
    float y;
    printf("Enter n and x: ");
    scanf("%d %d", &n, &x);

    if (n == 1) {
        y = 1 + x;
    } else if (n == 2) {
        y = 1.0 + ((float)x / 2);
    } else if (n == 3) {
        y = 1 + (x * x * x);
    } else {
        y = 1 + (n * x);
    }
    printf("Y = %.2f\n", y);
}