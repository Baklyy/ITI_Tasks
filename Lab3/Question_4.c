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
    for (int i = 0; i < n; i++)
    {
        int c = 0;
        for (int j = 0; j < n; j++)
        {
            if (i != j)
            {
                if (a[i] == a[j])
                    c++;
            }
        }
        if (c == 0)
            printf("%d ", a[i]);
    }
    free(a);
    return 0;
}