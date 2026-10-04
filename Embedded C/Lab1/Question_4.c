#include <stdio.h>
#include <math.h>
int main() {
     int time,hours=0,minutes=0,seconds=0;
    printf("please enter the time in seconds : ");
    scanf("%i",&time);
    hours = time / 3600 ;
    time = time % 3600;
    minutes = time / 60;
    seconds = time % 60;
    printf("the time is \n%d hours\n%d minutes\n%d seconds",hours,minutes,seconds);
    
    
    return 0;
}