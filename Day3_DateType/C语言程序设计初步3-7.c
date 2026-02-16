#include <stdio.h>
#include <math.h>
//求一元二次方程的两个实根
int main(){
    double a,b,c,d,p,q,x1,x2;
    printf("Input a,b,c:");
    scanf("%lf%lf%lf",&a,&b,&c);
    d=b*b-4*a*c;
    p=-b/(2*a);
    q=sqrt(d)/(2*a);
    x1=p+q;
    x2=p-q;
    printf("x1=%.2f,x2=%.2f\n",x1,x2);
return 0;
}
