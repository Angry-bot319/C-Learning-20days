/*输入直角三角形斜边的长度和其中一个锐角的角度值，
计算并输出两个直角边的边长*/
#include <stdio.h>
#include <math.h>
#define PI 3.14159
//c表示斜边长，a,b表示直角边长，angle表示角度值
int main(){
    double a,b,c,angle;
    printf("input c and angle:");
    scanf("%lf%lf",&c,&angle);
    a=c*sin(angle*PI/180);
    b=c*cos(angle*PI/180);
    printf("a=%.2f b=%.2f\n",a,b);

return 0;
}

