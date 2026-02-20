#include <stdio.h>
#define PI 3.14159
int main(){
    double circle(double radius);//函数原型声明
    double r,area;
    printf("Input r:");
    scanf("%lf",&r);//格式化输入没有%.2lf
    area=circle(r);
    printf("area=%.2lf\n",area);
return 0;
}
double circle(double radius)
{
return PI*radius*radius;
}
