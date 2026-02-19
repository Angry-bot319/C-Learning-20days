#include <stdio.h>
#include <math.h>
int main(){
    int i,n,is_prime=1;
    printf("Input a number:");
    scanf("%d",&n);
    for(i=2;i<=sqrt(n);i++){
        if(n%i==0){
            is_prime=0;
            break;
        }
    }
    if(is_prime)
        printf("%d is prime number\n",n);
    else
        printf("%d is not prime number\n",n);

return 0;
}
