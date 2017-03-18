#include <stdio.h>

int main()
{
    int n, i, sum = 1;  // don't forget to set to 1 instead of 0 (cause it is multiplication)
    printf(" *** Find Factorial ***\nEnter a number less than 100 : ");
    scanf("%d", &n);
    printf("Factorial of %d = ", n);

    for (i = 1; i <= n; i++)
    {
        sum *= i;
        printf("%d", i);

        // print 'x' if not last one
        if (i != n)
            printf(" x ");
    }

    printf(" = %d\n", sum);

    return 0;
}
