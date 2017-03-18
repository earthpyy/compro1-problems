#include <stdio.h>

int main()
{
    int n;
    printf(" *** switch control structure ***\nEnter a number : ");
    scanf("%d", &n);

    if (n % 3 == 0)
    {
        printf("Hello, world!");
    }
    else if (n % 3 == 1)
    {
        printf("Hello, what a wonderful world!");
    }
    else    // n % 3 == 2
    {
        printf("Hello, it is a beautiful day.");
    }

    return 0;
}
