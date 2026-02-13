#include <stdio.h>

//5个一行输出斐波那契数列前20个数，数组部分元素赋值
int main(){
    int i;
    int fib[20]={1,1};
    for(i=2;i<20;i++){
//fib[i]错写成fib[1]导致出错
        fib[i]=fib[i-1]+fib[i-2];
    }
    for(i=0;i<20;i++){
        printf("%6d",fib[i]);
        if((i+1)%5==0) printf("\n");
//是对5取余等于0换行，而不是除以5等于0换行
//只有一条语句没有加{}的必要
    }
return 0;
}
