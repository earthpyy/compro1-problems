#include <stdio.h>

int main()
{
    int n, i, j;
    printf(" *** Show isosceles triangle ***\nEnter a counting number : ");
    scanf("%d", &n);

    printf("Output :\n");

    for (i = 0; i < n; i++)
    {
        // print space
        for (j = 0; j < n-i-1; j++)
        {
            printf(" ");
        }

        // print star
        for (j = 0; j < (2 * i) + 1; j++)
        {
            printf("*");
        }

        // print enter
        printf("\n");
    }

    return 0;
}
