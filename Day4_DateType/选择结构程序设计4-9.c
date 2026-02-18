#include <stdio.h>
#include <math.h>
int main(){
    double a,b,c,d,p,q;
    printf("Input a b c:");
    scanf("%lf%lf%lf",&a,&b,&c);
    if(fabs(a)<1e-6){
        printf("Error:a can not be 0.\n");
    }else{
        d=b*b-4*a*c;
        p=-b/2*a;
        if(fabs(d)<1e-6){
            printf("Two same roots:%.4f\n",p);
        }else if(d>0){
            q=sqrt(d)/2*a;
            printf("Two real roots:%.4f %.4f\n",p+q,p-q);
        }else{
            printf("Two complex roots:%.4f+%.4fi %.4f-%.4fi\n",p,q,p,q);
        }
    }
return 0;
}
