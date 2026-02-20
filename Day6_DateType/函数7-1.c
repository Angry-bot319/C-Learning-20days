#include <stdio.h>
int max(int a,int b){
    int result;
    if(a>b)
        result=a;
    else
        result=b;
return result;
}
int main(){
    int i=10,j=100;
    int x=max(i,j);
    printf("x=%d\n",x);
return 0;
}
