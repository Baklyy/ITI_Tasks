#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    int n, g;
    srand(time(0));
    n = rand() % 100 + 1;
    do
    {
        printf("guess number 1-100:");
        scanf("%d",&g);
        if (g > n)
            printf("too high\n");
        if (g < n)
            printf("too low\n");
    } while (g !=n);
    printf("u guessed it");
    return 0;
}