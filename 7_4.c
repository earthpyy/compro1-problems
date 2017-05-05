#include <stdio.h>

int main()
{
    int n[10], i, j, temp;
    printf(" *** Sorting data in Ascending order. ***\nEnter 10 integers : ");
    for (i = 0; i < 10; i++)
    {
        scanf("%d", &n[i]);
    }

    // bubble sort
    for (i = 9; i >= 0; i--)        // for (i = 0; i < 10; i++)
    {
        for (j = 0; j < i; j++)     // for (j = 0; j < 9; j++)
        {
            if (n[j] > n[j+1])
            {
                // swap
                temp = n[j];
                n[j] = n[j+1];
                n[j+1] = temp;
            }
        }
    }

    //print
    printf("\nAscending sort : ");
    for (i = 0; i < 10; i++)
    {
        printf(" %d", n[i]);
    }

    return 0;
}
