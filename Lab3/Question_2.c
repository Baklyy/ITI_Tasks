#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n, *a, *b;
    printf("enter n:");
    scanf("%d", &n);
    a = (int *)malloc(n * sizeof(int));
    b = (int *)malloc(n * sizeof(int));
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
        b[i] = a[i];
    }
    for (int i = 0; i < n; i++)
        printf("%d ", b[i]);
    free(a);
    free(b);
    return 0;
}