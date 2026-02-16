/*计算2行3列的矩阵a和3行4列的矩阵b的乘积，
存放到2行4列的矩阵c中*/
#include <stdio.h>

int main(){
    int i,j,k;
    int a[2][3]={{1,2,3},{4,5,6}};
    int b[3][4]={{1,2,3,4},{5,6,7,8},{9,5,4,3}};
    int c[2][4];
/*循环代表的行和列由你自行填入数组中决定*/
    for(i=0;i<2;i++){
        for(j=0;j<4;j++){
            c[i][j]=0;
            for(k=0;k<3;k++){
                c[i][j]=c[i][j]+a[i][k]*b[k][j];
            }
        }
    }
    printf("Matrix a:\n");
    for(i=0;i<2;i++){
        for(k=0;k<3;k++){
            printf("%4d",a[i][k]);
        }
        printf("\n");//每行输出一定要换行
    }
    printf("Matrix b:\n");
    for(k=0;k<3;k++){
        for(j=0;j<4;j++){
            printf("%4d",b[k][j]);
        }
       printf("\n");//每行输出一定要换行
    }

    printf("Matrix c:\n");
    for(i=0;i<2;i++){
        for(j=0;j<4;j++){
           printf("%4d",c[i][j]);
        }
      printf("\n");
    }
return 0;
}
