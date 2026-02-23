#include <stdio.h>
//使用数组名和间接访问运算符的指针形式访问数组元素
int main(){
    int i,a[5]={11,22,33,44,55};
    for(i=0;i<5;i++){
        printf("%d ",*(a+i));//(a+i)得到a[i]的地址，再间接访问
    }
    printf("\n");
return 0;
}
