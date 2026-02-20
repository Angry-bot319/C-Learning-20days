#include <stdio.h>
long factorial(int n);
int main(){
    printf("5!=%ld\n",factorial(5));
    printf("10!=%ld\n",factorial(10));
return 0;
}

long factorial(int n){
    if(n==0)
        return 1;
    else
        return n*factorial(n-1);
}
