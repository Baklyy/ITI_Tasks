#include <stdio.h>
#include <stdlib.h>
int main()
{
    char s[100];
    int c = 1;
    printf("enter string:");
    gets(s);
    for (int i = 0; s[i] != '\0'; i++)
    {
        if (s[i] == ' ')
            c++;
    }
    printf("words: %d", c);
    free(s);
    return 0;
}