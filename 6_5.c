#include <stdio.h>

int main()
{
    int n, sum;
    printf(" *** Summation of each digit ***\nEnter a positive number : ");
    scanf("%d", &n);

    do
    {
        sum = 0;
        do
        {
            sum += n % 10;
            n /= 10;
        }
        while (n != 0);
        n = sum;
    }
    while (n > 9);

    printf("\nSummation of each digit = %d\n", sum);
    return 0;
}
