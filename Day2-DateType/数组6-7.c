//生成杨辉三角的前10行并存放到二维数组中，然后输出杨辉三角
#include <stdio.h>
#define N 10

int main(){
    int yh[10][10];
    int i,j;
    for(i=0;i<N;i++){
        for(j=0;j<=i;j++){
            if(j==0||i==j){
                yh[i][j]=1;
            }else{
                yh[i][j]=yh[i-1][j-1]+yh[i-1][j];
            }

        }
    }

    for(i=0;i<N;i++){
        for(j=0;j<=i;j++){ //等腰直角三角形的循环方式
            printf("%4d ",yh[i][j]);
        }
        printf("\n");//输出一行后换行
    }

return 0;
}
