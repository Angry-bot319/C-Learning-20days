#include <stdio.h>
//do-while至少循环一次
int main(){
    int i=1,sum=0;
    do{
        sum+=i;
        i++;
    }while(i<=100);
    printf("1+2+...+100=%d\n",sum);
return 0;
}
