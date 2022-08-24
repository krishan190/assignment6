#include <stdio.h>
int main()
{
    int n, i, sum = 0;
    printf("Enter a number:");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {

        sum = sum + i * i * i;
    }
    printf("sum of cubes of of natural number ,%d", sum);
    printf("\n");
    return 0;
}