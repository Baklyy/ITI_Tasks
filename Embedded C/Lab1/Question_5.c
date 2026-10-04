#include <stdio.h>
#include <math.h>
int main() {
        int num1,num2;
    printf("please enter first number : ");
    scanf("%d",&num1);
    printf("please enter second number : ");
    scanf("%d",&num2);
    if ( num1 % num2 ==  0 || num2 % num1 == 0)
    {
        printf("these 2 numbers are multipls\n");
    }
    else
        printf("these 2 numbers are not multipls\n");
    
    
    return 0;
}