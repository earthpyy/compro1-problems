#include <stdio.h>

int main()
{
    // set max to lowest int and min to highest int
    int max = -2147483648, min = 2147483647;
    int i, temp;
    printf(" *** Show max * min ***\nEnter 10 integers : ");

    for (i = 0; i < 10; i++)
    {
        scanf("%d", &temp);
        if (temp > max)
            max = temp;
        if (temp < min)
            min = temp;
    }

    printf("%d * %d = %d", max, min, max * min);

    return 0;
}
