#include <stdio.h>
int main(){
    int n1=4294967295;
    unsigned n2=4294967295;
    int m=2147483647;
    printf("作为有符号int类型输出:n1=%d,n2=%d\n",n1,n2);
    printf("作为无符号int类型输出:n1=%u,n2=%u\n",n1,n2);
    printf("m=%d\n",m);
    m=m+1;
    printf("m+1=%d\n",m);
return 0;
}
