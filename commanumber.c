#include <stdio.h>
#define NUMBER 2147483647

int main()
{
    int num = NUMBER, temp = NUMBER, n = 0;

    // count digits
    while (temp != 0)
    {
        n++;
        temp /= 10;
    }

    // print
    if (n > 9)
    {
        printf("%d,", num/1000000000);
        num %= 1000000000;
    }
    if (n > 6)
    {
        printf("%03d,", num/1000000);
        num %= 1000000;
    }
    if (n > 3)
    {
        printf("%03d,", num/1000);
        num %= 1000;
    }
    printf("%03d", num);

    return 0;
}
