#include <stdio.h>

int main()
{
    char str[200];
    int i, j;
    printf(" *** Single space ***\nEnter a line of characters : ");
    scanf("%[^\n]", str);
    printf("Single space output :\n");

    for (i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == ' ')
        {
            if (i != 0)
                printf(" ");

            while (str[i+1] == ' ')
                i++;
        }
        else
        {
            printf("%c", str[i]);
        }
    }

    return 0;
}
