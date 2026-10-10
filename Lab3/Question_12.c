#include <stdio.h>
#include <stdlib.h>
int main()
{
    char s1[100];
    char s2[100];
    int f = 0, i = 0;
    printf("string 1:");
    gets(s1);
    printf("string 2:");
    gets(s2);
    while (s1[i] != '\0' || s2[i] != '\0')
    {
        if (s1[i] != s2[i])
        {
            f = 1;
            break;
        }
        i++;
    }
    if (f == 0)
        printf("same");
    else
        printf("not same");
    return 0;
}