#include <stdio.h>
#include <math.h>
int main() {
  float x1,x2,y1,y2;
   printf("Please enter the first point (x1,y1) :");
    scanf("%f%f",&x1,&y1);
    printf("Please enter the second point (x2,y2) : ");
    scanf("%f%f",&x2,&y2);
    double ans = sqrt(pow(x2-x1,2.0)+ pow(y2-y1,2.0));
    printf("The distance between these two points is : %f",ans);
    return 0;
}