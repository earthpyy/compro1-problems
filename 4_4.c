#include <stdio.h>

int main()
{
    int a, b, c;
    printf(" *** Check for right triangle ***\nEnter 3 sides of triangle : ");
    scanf("%d %d %d", &a, &b, &c);

    if (c * c == (a * a) + (b * b))
    {
        printf("%d, %d and %d are sides of RIGHT triangle.", a, b, c);
    }
    else
    {
        printf("%d, %d and %d are NOT sides of RIGHT triangle, just a TRIANGLE.", a, b, c);
    }

    return 0;
}
