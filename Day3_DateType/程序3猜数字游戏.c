#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    printf("(猜数字游戏)\n");
    int target,guess,attempts=0;
    //设置随机数种子
    srand(time(0));
    target=rand()%100+1;//生成1-100的随机数
    printf("我已经想好了一个1-100之间的数字。\n");
    printf("猜猜看你能几次猜中。\n\n");
    //使用do-while循环实现猜数字

    do{
        printf("请输入你的猜测(1-100):");
        scanf("%d",&guess);
        attempts++;

        if(guess<target){
            printf("太小了，再试试\n\n");
        }else if(guess>target){
            printf("太大了，再试试\n\n");
        }else{
            printf("恭喜你猜对了!\n");
            printf("目标数字是:%d\n你用了%d次猜中\n",target,attempts);
        }
    }while(guess!=target);

return 0;
}
