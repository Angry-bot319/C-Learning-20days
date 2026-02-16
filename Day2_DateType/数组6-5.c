#include <stdio.h>
int main(){
    int a[2][3],b[3][2];
    int i,j;
    printf("Input matrix a:\n");

    for(i=0;i<2;i++){
        for(j=0;j<3;j++){
            scanf("%d",&a[i][j]);//输入数组a的一个元素
        }
    }
    for(i=0;i<2;i++){
        for(j=0;j<3;j++){
            b[j][i]=a[i][j];//按顺序输入a的值给对应的b
        }
    }
    printf("Matrix b:\n");
 //数组的输出需要遍历后一个一个输出
    for(i=0;i<3;i++){
        for(j=0;j<2;j++){
            printf("%5d",b[i][j]);//输出数组b的一个元素（一行）
        }                        //ij与上一个for无关，代表第几行第几列而已
        printf("\n");//（换行）
    }
return 0;
}
