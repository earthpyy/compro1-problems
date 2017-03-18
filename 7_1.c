#include <stdio.h>

int main()
{
    char str[200];
    int i;
    printf(" *** Show Title Case. ***\nEnter a line of characters : ");
    scanf("%[^\n]", str);
    printf("output :\n");

    for (i = 0; str[i] != '\0'; i++)
    {
        // change first char if it is 'a'-'z'
        if (i == 0 && str[i] >= 'a' && str[i] <= 'z')
        {
            str[i] -= 32;   // str[0] -= 32
        }
        // change next char if this char = ' ' and next char is 'a'-'z'
        else if (str[i] == ' ' && str[i+1] >= 'a' && str[i+1] <= 'z')
        {
            str[i+1] -= 32; // next char -= 32
        }
        // change to lower if upper and not the title char
        else if (i != 0 && str[i-1] != ' ' && str[i] >= 'A' && str[i] <= 'Z')
        {
            str[i] += 32; // this car += 32
        }
    }

    printf("%s\n", str);

    return 0;
}
