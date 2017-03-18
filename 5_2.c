#include <stdio.h>

int main()
{
    int n, i;
    printf(" *** Multiplication Table ***\nEnter a number (2-100) : ");
    scanf("%d", &n);

    if (n < 2 || n > 100)
    {
        printf(" - - -  Out of Range  - - -");
    }
    else
    {
        for (i = 1; i <= 12; i++)
        {
            printf("  %d x %-2d = %d\n", n, i, n * i);
        }
    }
    return 0;
}
