#include <stdio.h>

int main()
{
    int a, b, c, max, mid;
    printf(" *** Find Maximum / Middle ***\nEnter 3 integers : ");
    scanf("%d %d %d", &a, &b, &c);

    if (a >= b)
    {
        if (a >= c)
        {
            max = a;
            mid = c;
        }
        else    // a < c
        {
            max = c;
            mid = a;
        }
    }
    else
    {
        if (b >= c)
        {
            max = b;
            mid = c;
        }
        else    // b < c
        {
            max = c;
            mid = b;
        }
    }

    printf("Max / Mid = %d / %d = %.3f", max, mid, max / mid * 1.0);  // * 1.0 to make it float

    return 0;
}
