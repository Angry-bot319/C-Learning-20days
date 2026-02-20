#include <stdio.h>
#define PI 3.14159
int main(){
    double circle(double radius);//函数原型声明
    double cylinder(double radius,double height);
    double r,area,h,vol;
    printf("Input r h:");
    scanf("%lf%lf",&r,&h);//格式化输入没有%.2lf
    area=circle(r);
    vol=cylinder(r,h);
    printf("area=%.2lf vol=%.2lf\n",area,vol);
return 0;
}
double circle(double radius)
{
    return PI*radius*radius;
}
double cylinder(double radius,double height)
{
    return circle(radius)*height;
}
