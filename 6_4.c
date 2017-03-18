#include <stdio.h>

int main()
{
    int n, sum = 0;
    printf(" *** Summation of each digit ***\nEnter a positive number : ");
    scanf("%d", &n);

    while (n != 0)
    {
        sum += n % 10;
        n /= 10;
    }

    printf("\nSummation of each digit = %d\n", sum);
    return 0;
}
