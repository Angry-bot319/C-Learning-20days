#include <stdio.h>
double average(double array[],int n);
int main(){
    double scores[40];
    double aver;
    int num,i;
    printf("输入班级人数:");
    scanf("%d",&num);
    printf("输入%d个学生的成绩:",num);
    for(i=0;i<num;i++){
        scanf("%lf",&scores[i]);
    }
    aver=average(scores,num);
    printf("班级平均分:%.2lf\n",aver);
return 0;
}
double average(double array[],int n){
    double sum=0;
    int i;
    for(i=0;i<n;i++){
        sum+=array[i];
    }
    return sum/n;
}
