#include <stdio.h>
//函数声明
int add(int a,int b);
int subtract(int a,int b);
int multiply(int a,int b);
float divide(int a,int b);
void print_result(char op,int a,int b,float result);

int main(){
    int x=15,y=4;

    print_result('+',x,y,add(x,y));
    print_result('-',x,y,subtract(x,y));
    print_result('*',x,y,multiply(x,y));
    print_result('/',x,y,divide(x,y));
return 0;
}

int add(int a,int b){
    return a+b;
}

int subtract(int a,int b){
    return a-b;
}

int multiply(int a,int b){
    return a*b;
}

float divide(int a,int b){
    if(b==0){
        printf("错误：除数不能为0！\n");
        return 0;
    }
    return (float)a/b;
}
void print_result(char op,int a,int b,float result){
    printf("%d %c %d = %.2f\n",a,op,b,result);
}
