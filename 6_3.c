#include <stdio.h>

int main()
{
    int start, end, i, j, prime, count = 0;
    printf(" *** Show prime number ***\nEnter 2 positive numbers : ");
    scanf("%d %d", &start, &end);
    printf("\nprime number(s) from %d to %d : ", start, end);

    for (i = start; i <= end; i++)
    {
        // prime checker
        prime = 1;

        if (i < 2)
        {
            prime = 0;
        }
        else // i >= 2
        {
            for (j = 2; j < i; j++)
            {
                if (i % j == 0)
                {
                    prime = 0;
                    break;  // stop loop
                }
            }
        }

        // if prime then print number
        if (prime == 1)
        {
            printf("%d ", i);
            count++;
        }
    }

    printf("\ntotal prime numbers : %d\n", count);

    return 0;
}
