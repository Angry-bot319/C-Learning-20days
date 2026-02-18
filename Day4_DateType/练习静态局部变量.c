#include <stdio.h>
void counter(){
    static int count=0;//静态局部变量，只初始化一次，函数调用结束不销毁
    count++;
    printf("第%d次调用\n",count);
}
int main(){
    counter();
    counter();
    counter();
return 0;
}
