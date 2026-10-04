#include <stdio.h>
#include <math.h>
int main() {
    int num,found=0;
    printf("please enter a number : ");
    scanf("%d",&num);
    for (int i = 1 ; i <= 100 ; i++ )
        {
            if ( i % num == 0)
            {
                printf("%d  ",i);
                found = 1;
            }
        }
    if (found) printf("\nThese are the numbers from 1 to 100 Divisible by %d",num);
    else
        printf("There are no numbers from 1 to 100 divisible by %d",num);
    
    
    return 0;
}
    