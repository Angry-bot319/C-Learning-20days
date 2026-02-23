#include <stdio.h>
struct student{
    int id;
    char name[20];
    double score1;
    double score2;
    double score3;
    double aver;
};
int main(){
    struct student stu;
    printf("输入：\n学号 姓名 成绩1 成绩2 成绩3：\n");
    scanf("%d%s%lf%lf%lf",&stu.id,stu.name,
                        &stu.score1,&stu.score2,&stu.score3);
    stu.aver=(stu.score1+stu.score2+stu.score3)/3;
    printf("学号：%d\n",stu.id);
    printf("姓名：%s\n",stu.name);
    printf("成绩1：%.2f\n",stu.score1);
    printf("成绩2：%.2f\n",stu.score2);
    printf("成绩3：%.2f\n",stu.score3);
    printf("平均成绩:%.2f\n",stu.aver);
return 0;
};
