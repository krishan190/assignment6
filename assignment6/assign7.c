#include <stdio.h>
int main()
{
    int n, count = 0;
    printf("Enter a number:");
    scanf("%d", &n);
    while (n != 0)
    {
        n = n / 10;
        count++;
    }
    printf("Count the digits of %d number", count);
    printf("\n");
    return 0;
}