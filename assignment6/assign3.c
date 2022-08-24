#include <stdio.h>
int main()
{
    int n, i, sum = 0;
    printf("Enter a number:");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {

        sum = sum + 2 * i + 1;
    }
    printf("sum of first N odd natural number ,%d", sum);
    printf("\n");
    return 0;
}