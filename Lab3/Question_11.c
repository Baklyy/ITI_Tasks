#include <stdio.h>
#include <stdlib.h>
int main()
{
    char s[100];
    int l = 0;
    printf("string:");
    gets(s);
    while (s[l] != '\0')
    {
        l++;
    }
    printf("length is %d", l);
    free(s);
    return 0;
}