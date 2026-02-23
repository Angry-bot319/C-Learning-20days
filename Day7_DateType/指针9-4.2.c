#include <stdio.h>
//使用指针变量和下标访问数组元素
int main(){
    int i,a[5]={11,22,33,44,55};
    int *p=a;//p得到数组首地址
    for(i=0;i<5;i++){
        printf("%d ",p[i]);
    }
    printf("\n");
return 0;
}
