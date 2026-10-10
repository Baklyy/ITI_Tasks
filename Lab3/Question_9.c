#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n, a[32], i = 0;
    printf("enter n:");
    scanf("%d", &n);
    while (n > 0)
    {
        a[i] = n % 2;
        n = n / 2;
        i++;
    }
    for (int j = i - 1; j >= 0; j--)
        printf("%d", a[j]);
    return 0;
}