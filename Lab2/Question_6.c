#include <stdio.h>
int main()
{
    int r1, r2;
    printf("enter range:");
    scanf("%d %d", &r1, &r2);
    for (int i = r1; i <= r2; i++)
    {
        int p = 1;
        if (i == 0 || i == 1)
            p = 0;
        for (int j = 2; j < i; j++)
        {
            if (i % j == 0)
                p = 0;
        }
        if (p == 1)
            printf("%d ", i);
    }
    return 0;
}