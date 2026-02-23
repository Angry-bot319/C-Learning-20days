#include <stdio.h>
int main(){
    int x,*p;
    p=&x;
    printf("p=%p,&x=%p\n",p,&x);
    *p=100;
    printf("x=%d,*p=%d\n",x,*p);
    x=200;
    printf("x=%d,*p=%d\n",x,*p);
return 0;
}
