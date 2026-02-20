#include <stdio.h>
long fac(int n);
long sum(int n);
int main(){
    printf("1!+2!+3!=%ld\n",sum(3));
    printf("1!+2!+3!+4!=%ld\n",sum(4));
    printf("1!+2!+3!+4!+5!=%ld\n",sum(5));
return 0;
}

long fac(int n){
    long f=1;
    int i;
    for(i=1;i<=n;i++){
        f=f*i;
    }
    return f;
}

long sum(int n){
    long s=0;
    int i;
    for(i=1;i<=n;i++){
        s=s+fac(i);
    }
return s;
}
