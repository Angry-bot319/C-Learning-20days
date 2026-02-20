#include <stdio.h>
void dtob(int n);
int main(){
    printf("10的二进制形式：");
    dtob(10);
    printf("\n");
    printf("100的二进制形式：");
    dtob(100);
    printf("\n");
    printf("255的二进制形式：");
    dtob(255);
    printf("\n");
return 0;
}
void dtob(int n){
    if(n/2>0){
        dtob(n/2);
    }
    printf("%d",n%2);
}
