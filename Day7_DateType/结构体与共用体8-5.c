#include <stdio.h>
union data{
    short n;
    char c[2];
};
int main(){
    union data d;
    char x;
    d.n=0xFF11;
    printf("交换操作前：d.n=%d\n",d.n);
    x=d.c[0];
    d.c[0]=d.c[1];
    d.c[1]=x;
    printf("交换操作后：d.n=%d\n",d.n);
return 0;
}
