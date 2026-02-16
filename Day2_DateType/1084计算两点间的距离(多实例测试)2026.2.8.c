#include <stdio.h>
#include <math.h>
//忘记加头文件

int main(){
//数据类型出错“%lf”
    double x1,y1,x2,y2;
    double distance;
//建议写成scanf()==4(函数的返回值)确保读取完整四个值，!=EOF在数据类型不符或数据不够时出错
    while(scanf("%lf %lf %lf %lf",&x1,&y1,&x2,&y2)!=EOF){
        distance=sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2));
        printf("%.2lf\n",distance);
//忘记加换行符
    }

 return 0;
}
