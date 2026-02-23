#include <stdio.h>
//直接使用指针变量间接访问数组元素
int main(){
    int a[5]={11,22,33,44,55};
    int *p;
    for(p=a;p<a+5;p++)//p++使p指向数组的下一个元素
    {
        printf("%d ",*p);//指针变量间接访问数组元素
    }
    printf("\n");
return 0;}
