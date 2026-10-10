#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n, *a, *f;
    printf("n:");
    scanf("%d", &n);
    a = (int *)malloc(n * sizeof(int));
    f = (int *)malloc(n * sizeof(int));
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
        f[i] = -1;
    }
    for (int i = 0; i < n; i++)
    {
        int c = 1;
        for (int j = i + 1; j < n; j++)
        {
            if (a[i] == a[j])
            {
                c++;
                f[j] = 0;
            }
        }
        if (f[i] != 0)
            f[i] = c;
    }
    for (int i = 0; i < n; i++)
    {
        if (f[i] != 0)
            printf("%d occurs %d times\n", a[i], f[i]);
    }
    free(a);
    free(f);
    return 0;
}