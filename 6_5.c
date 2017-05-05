#include <stdio.h>

int main()
{
    int n, i, sum;
    printf(" *** Summation of each digit into one digit ***\nEnter a positive number : ");
    scanf("%d", &n);
    printf("%d", n);

    do
    {
        printf(" => ");
        sum = 0;
        while (n != 0)
        {
            printf("%d", n % 10);
            if (n / 10 != 0)    // if this is not the last one
                printf(" + ");  // print '+'
            sum += n % 10;
            n /= 10;
        }
        n = sum;
        printf(" = %d", sum);
    }
    while (n > 9);

    return 0;
}
