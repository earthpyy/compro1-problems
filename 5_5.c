#include <stdio.h>

int main()
{
    char str[200];
    int i, sum = 0;
    printf(" *** Summation of ASCII code ***\nEnter a string : ");
    scanf("%[^\n]", str);
    printf("output : ");

    for (i = 0; str[i] != '\0'; i++)
    {
        sum += str[i];
        printf("%-3d", str[i]);

        // print '+' if not last one
        if (str[i+1] != '\0')
            printf(" + ");
    }

    printf("= %d\n", sum);

    return 0;
}
