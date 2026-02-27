#include <stdio.h>
int add(int a,int b);
int sub(int a,int b);
int mul(int a,int b);
int div(int a,int b);
int main(){
    int x,y,z;
    char op;
    int (*p)(int,int);
    printf("输入整数四则运算式:");
    scanf("%d%c%d",&x,&op,&y);
    switch(op){
        case'+':
            p=add;
            break;
        case'-':
            p=sub;
            break;
        case'*':
            p=mul;
            break;
        case'/':
            p=div;
            break;
        default:
            printf("运算符输入错误！\n");
            return 0;
    }
    z=(*p)(x,y);
    printf("%d%c%d=%d\n",x,op,y,z);
return 0;
}
int add(int a,int b){
    return a+b;
}
int sub(int a,int b){
    return a-b;
}
int mul(int a,int b){
    return a*b;
}
int div(int a,int b){
    return a/b;
}
