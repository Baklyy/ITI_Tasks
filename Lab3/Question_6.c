#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n, *a;
    printf("n:");
    scanf("%d", &n);
    a = (int *)malloc(n * sizeof(int));
    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);
    int mx = a[0], mn = a[0];
    for (int i = 1; i < n; i++)
    {
        if (a[i] > mx)
            mx = a[i];
        if (a[i] < mn)
            mn = a[i];
    }
    printf("max: %d min: %d", mx, mn);
    free(a);
    return 0;
}