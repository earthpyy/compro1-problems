#include <stdio.h>

int main()
{
    int n;
    printf(" *** Display integer in comma format ***\nEnter an integer : ");
    scanf("%d", &n);
    printf("%d in comma format = ", n);

    if (n >= 1000000000)
    {
        printf("%d,", n / 1000000000);
    }
    if (n >= 1000000)
    {
        printf("%03d,", (n % 1000000000) / 1000000);
    }
    if (n >= 1000)
    {
        printf("%03d,", (n % 1000000) / 1000);
    }
    printf("%03d.", n % 1000);

    return 0;
}
