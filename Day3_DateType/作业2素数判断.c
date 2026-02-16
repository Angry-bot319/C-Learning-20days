#include <stdio.h>

int main(){
    int num,is_prime=1,i;
    printf("请输入一个正整数:");
    scanf("%d",&num);

    if(num<=0){
        is_prime=0;
    }else{
        for(i=2;i<=sqrt(num);i++){
            if(num%i==0){
                is_prime=0;
                break;
            }
        }
    }
    if(is_prime){
        printf("%d 是素数。\n",num);
    }else{
        printf("%d 不是素数。\n",num);
    }
return 0;
}
