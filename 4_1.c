#include <stdio.h>

int main()
{
    int n;
    printf(" *** ODD/EVEN verification ***\nEnter an integer : ");
    scanf("%d", &n);

    if (n % 2 == 0)
    {
        printf("%d is an EVEN number.", n);
    }
    else
    {
        printf("%d is an ODD number.", n);
    }
    return 0;
}
