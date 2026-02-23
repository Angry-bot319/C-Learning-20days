#include <stdio.h>
#include <string.h>
struct candidate{//定义候选人的结构体类型
    char name[20];//姓名
    int count;    //得票数
};
int main(){
    //定义结构体数组并初始化
    struct candidate cand[]={{"zhang",0},{"wang",0},{"sun",0}};
    int i,j,n;
    char name[20];
    printf("输入投票人数：");
    scanf("%d",&n);
    printf("输入全部[%d]个投票人选举的候选人名：\n",n);
    for(i=1;i<=n;i++){
    //外层循环输入n个投票情况
        printf("第[%d]个投票人选举的人名：",i);
        scanf("%s",name);
        for(j=0;j<3;j++){
        //循环检查本次投票投给哪个候选人
            if(strcmp(cand[j].name,name)==0){
                cand[j].count++;//判断到候选人，票数加1
            }
        }
    }
    printf("候选人得票情况如下：\n");
    for(i=0;i<3;i++){
        printf("%-10s:%2d\n",cand[i].name,cand[i].count);
    }
return 0;
}
