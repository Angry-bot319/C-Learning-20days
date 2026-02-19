#include <stdio.h>
#include <math.h>
int main(){
    int i,n,is_prime=1,count=0;
    for(n=2;n<=100;n++){
        is_prime=1;//ÖØÖÃ£¡£¡£¡
        for(i=2;i<=sqrt(n);i++){
            if(n%i==0){
                is_prime=0;
                break;
            }
        }
        if(is_prime){
            printf("%4d ",n);
            count++;
            if(count%10==0){
                printf("\n");
            }
        }
    }

return 0;
}

