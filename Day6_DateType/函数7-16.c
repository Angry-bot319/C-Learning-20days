#include <stdio.h>
void hanio(int n,char a,char b,char c);
int main(){
    int disk=3;
    printf("移动%d个盘子的过程：\n",disk);
    hanio(disk,'A','B','C');
return 0;
}
void hanio(int n,char a,char b,char c){
    if(n==1)//递归的终止条件
    {
        printf("%c--->%c\n",a,c);
    }else{
        hanio(n-1,a,c,b);//递归移动n-1个盘子
        printf("%c--->%c\n",a,c);
        hanio(n-1,b,a,c);
    }
}
