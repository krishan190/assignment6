#include <stdio.h>
int main()
{
    int n, i, rem, rev;
    printf("Enter a number:");
    scanf("%d", &n);
    while (n != 0)
    {
        rem = n % 10;
        n = n / 10;
        rev = rev * 10 + rem;
    }
    printf("Reverse no is %d", rev);
    printf("\n");
}