#include <stdio.h>
void swap(int a,int b){
    int temp;
    printf("swap函数,交换之前:a=%d,b=%d\n",a,b);
    temp=a;
    a=b;
    b=temp;
    printf("swap函数,交换之后:a=%d,b=%d\n",a,b);
return;
}
int main(){
    int x=10,y=100;
    printf("main函数,调用swap之前:x=%d,y=%d\n",x,y);
    swap(x,y);
    printf("main函数,调用swap之后:x=%d,y=%d\n",x,y);
return 0;
}
