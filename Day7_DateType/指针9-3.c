#include <stdio.h>
int main(){
    int *p,*q;
    int arr[10];
    p=&arr[0];
    q=&arr[5];
    printf("int类型的字节数：%d\n",sizeof(int));
    printf("p=%p,q=%p,p-q=%d\n",p,q,p-q);
return 0;
}
