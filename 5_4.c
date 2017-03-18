#include <stdio.h>

int main()
{
    int start, end, i, sum = 0;
    printf(" *** Display Summation ***\nEnter 2 whole numbers : ");
    scanf("%d %d", &start, &end);
    printf("Summation = ");

    for (i = start; i <= end; i++)
    {
        sum += i;
        printf("%d", i);

        // print '+' if not last one
        if (i != end)
            printf(" + ");
    }

    printf(" = %d\n", sum);
    return 0;
}
