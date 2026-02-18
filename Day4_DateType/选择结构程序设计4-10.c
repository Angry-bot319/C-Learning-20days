#include <stdio.h>
int main(){
    int year,month,days,error;
    error=0;//先假设输入的月份没有错误
    printf("Input year and month:");
    scanf("%d%d",&year,&month);
    switch(month){
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
            days=31;
            break;
        case 4:
        case 6:
        case 9:
        case 11:
            days=30;
            break;
        case 2:
            if(year%4==0&&year%100!=0||year%400==0)
                days=29;
            else
                days=28;
            break;
        default:
            error=1;//error赋值为1，表示月份输入错误
    }
    if(error==1)
        printf("month: %d error!\n",month);
    else
        printf("%d-%02d has %d days!\n",year,month,days);
return 0;
}
