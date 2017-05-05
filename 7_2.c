#include <stdio.h>

int main()
{
    char str[200];
    int i;
    printf(" *** Show Title Case. ***\nEnter a line of characters : ");
    scanf("%[^\n]", str);

    for (i = 0; str[i] != '\0'; i++)
    {
        // change last char if it is 'a'-'z'
        if (str[i+1] == '\0' && str[i] >= 'a' && str[i] <= 'z')
        {
            str[i] -= 32;   // last char -= 32
        }
        // change previous char if this char = ' ' or '.' and next char is 'a'-'z'
        else if ((str[i] == ' ' || str[i] == '.') && str[i-1] >= 'a' && str[i-1] <= 'z')
        {
            str[i-1] -= 32; // prev char -= 32
        }
        // change to lower if upper and not the title char
        else if (str[i+1] != '\0' && str[i+1] != ' ' && str[i] >= 'A' && str[i] <= 'Z')
        {
            str[i] += 32; // this car += 32
        }
    }

    printf("output :\n%s\n", str);

    return 0;
}
