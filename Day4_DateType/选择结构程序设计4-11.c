#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(){
    int n1,n2,answer;
    srand(time(0));//设置随机数种子为系统当前时间
    n1=rand()%100;//获得第一个随机整数
    n2=rand()%100;//获得第二个随机整数
    printf("%d+%d=? \n",n1,n2);
    printf("Input your answer:");
    scanf("%d",&answer);
    if(answer==n1+n2)
        printf("Correct!\n");
    else
        printf("Error!\n");
return 0;
}
