#include <stdio.h>
//格式字符指定的数据类型和格式输出
int main(){
    int i=-1;
    float f=1.234F;
    double d=12.3456789123;
    char c='A';

    printf("i=%d,i=%o,i=%x,i=%u\n",i,i,i,i);
    printf("f=%f,f=%e,f=%g\n",f,f,f);
    printf("d=%f,d=%e,d=%g\n",d,d,d);
    printf("c=%c,c=%d\n",c,c);

return 0;
}
