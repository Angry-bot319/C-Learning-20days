#include <stdio.h>
#include <math.h>
int main(){
    double a=1.0,b=1.0,c=a/b,sum=0.0,pi;
    while(fabs(c)>1e-6){//while循环的条件错了，为真才能进入循环
        sum+=c;
        a=-a;
        b=b+2;
        c=a/b;
    }
    pi=sum*4;
    printf("pi=%.8lf\n",pi);
return 0;
}
