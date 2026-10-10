#include <stdio.h>
int main()
{
    int start, end;
    printf("enter start and end:");
    scanf("%d %d", &start, &end);
    printf("even:");
    for (int i = start; i <= end; i++)
    {
        if (i % 2 == 0)
            printf("%d ", i);
    }
    printf("\nodd:");
    for (int i = start; i <= end; i++)
    {
        if (i % 2 != 0)
            printf("%d ", i);
    }
    return 0;
}