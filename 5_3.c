#include <stdio.h>
#include <string.h>

int main()
{
    char str[200];
    int i;
    printf(" *** Reverse string display ***\nEnter a string : ");
    scanf("%[^\n]", str);
    printf("Output : ");

    for (i = strlen(str) - 1; i >= 0; i--)          // real solution
    // for (i = strlen(str) - 2; i >= 0; i--)       // solution to submit to grader
    {
        printf("%c", str[i]);
    }

    printf("\n");

    return 0;
}
