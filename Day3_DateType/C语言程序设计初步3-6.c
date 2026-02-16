#include <stdio.h>
#include <math.h>
//输入三角形边长，海伦公式计算三角形面积并输出
int main(){
    double a,b,c,s,area;
    printf("Input a b c:");
    scanf("%lf%lf%lf",&a,&b,&c);
    s=(a+b+c)/2;
    area=sqrt(s*(s-a)*(s-b)*(s-c));
    printf("area=%.2f\n",area);
return 0;
}
