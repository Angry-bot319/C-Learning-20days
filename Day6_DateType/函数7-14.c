#include <stdio.h>
#include <math.h>
int prime(int n);
int main(){
    int n,a,k;
    printf("输入一个大于6的整数：");
    scanf("%d",&n);
    for(k=6;k<=n;k=k+2){
        for(a=3;a<=k/2;a=a+2){
            if(prime(a)&&prime(k-a)){
                printf("%d=%d+%d\n",k,a,k-a);
                break;
            }
        }
    }
return 0;
}

int prime(int n){
    int i,k;
    k=sqrt(n);
    for(i=2;i<=k;i++){
        if(n%i==0){
            return 0;
        }
    }
    return 1;
}
