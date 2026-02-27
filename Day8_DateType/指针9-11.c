#include <stdio.h>
void swap1(int *p,int *q);
void swap2(int *p,int *q);
int main(){
    int a=10,b=100;
    int *pa,*pb;
    pa=&a;
    pb=&b;
    printf("a=%d,b=%d\n",*pa,*pb);
    swap1(pa,pb);
    printf("a=%d,b=%d\n",*pa,*pb);
    swap2(pa,pb);
    printf("a=%d,b=%d\n",*pa,*pb);
return 0;
}
void swap1(int *p,int *q){
    int temp;
    temp=*p;
    *p=*q;
    *q=temp;
}
void swap2(int *p,int *q){
    int *t;
    t=p;
    p=q;
    q=t;
}
