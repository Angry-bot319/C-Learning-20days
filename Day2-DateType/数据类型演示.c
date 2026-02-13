#include <stdio.h>
#include <limits.h>
#include <float.h>

int main(){
    printf("数据类型演示:\n");
    printf("1.整数类型:\n");
    printf("    char占用字节:%zu\n",sizeof(char));
    printf("    int占用字节:%zu\n",sizeof(int));
    printf("    long long占用字节:%zu\n",sizeof(long long));

    printf("    char取值范围:%d~%d\n",CHAR_MIN,CHAR_MAX);
    printf("    int取值范围:%d~%d\n",INT_MIN,INT_MAX);

    printf("\n2.浮点类型:\n");
    printf("    float占用字节:%zu\n",sizeof(float));
    printf("    double占用字节:%zu\n",sizeof(double));
    printf("    float精度:%d位小数\n",FLT_DIG);
    printf("    double精度:%d位小数\n",DBL_DIG);

    printf("\n3.类型转换:\n");
    int a=5,b=2;
    float result=a/b;
    printf("    5/2(整数除法)=%.1f\n",result);
    result=(float)a/b;
    printf("    5.0/2=%.1f\n",result);

    printf("\n4.溢出演示:\n");
    int max_int=INT_MAX;
    printf("    int最大值:%d\n",max_int);
    printf("    最大值+1:%d(溢出)\n",max_int+1);

    return 0;

}

