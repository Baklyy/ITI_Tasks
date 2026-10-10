#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n, *a, c = 0;
    printf("enter n:");
    scanf("%d", &n);
    a = (int *)malloc(n * sizeof(int));
    for (int i = 0; i < n; i++)
       { scanf("%d", &a[i]);}
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (a[i] == a[j])
            {
                c++;
                break;
            }
        }
    }
    printf("duplicates: %d", c);
    free(a);
    return 0;
}