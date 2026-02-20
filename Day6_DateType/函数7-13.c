#include <stdio.h>
void func1();
void func2();
int main(){
    printf("调用函数func1三次，观察输出结果:\n");
    func1();
    func1();
    func1();
    printf("调用函数func2三次，观察输出结果:\n");
    func2();
    func2();
    func2();
return 0;
}
void func1(){
    int num=0;
    num=num+1;
    printf("num=%d\n",num);
}
void func2(){
    static int num=0;
    num=num+1;
    printf("num=%d\n",num);
}
