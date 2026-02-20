#include <stdio.h>
double max,min;//定义全局变量，划分存储空间
double average(double array[],int n);
int main(){
    double scores[10],aver;
    int i;
    printf("输入10个学生的成绩：\n");
    for(i=0;i<10;i++){
        scanf("%lf",&scores[i]);
    }
    aver=average(scores,10);
    printf("最高分：%.2f\n",max);
    printf("最低分：%.2f\n",min);
    printf("平均分：%.2f\n",aver);
return 0;
}

double average(double array[],int n){
    double sum=0;
    int i;
    max=min=array[0];
    for(i=0;i<n;i++){
        if(array[i]>max)
            max=array[i];//因为划分存储所以数值跟着变
        if(array[i]<min)
            min=array[i];
        sum+=array[i];
    }
    return sum/n;
}

