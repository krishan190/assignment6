#include <stdio.h>
int main()
{
    int n, i, sum = 0;
    printf("Enter a number:");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        sum = sum + 2 * i;
    }
    printf("sum of first n even natural numbers:%d", sum);
    printf("\n");
}