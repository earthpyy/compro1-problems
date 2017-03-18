#include <stdio.h>

int main()
{
    char temp;
    printf("Enter UPPER word: ");
    do
    {
        scanf("%c", &temp);
        if (temp >= 'A' && temp <= 'Z')
            printf("%c", temp + 32);
        else
            printf("%c", temp);
    }
    while(temp != '\n');
    return 0;
}
