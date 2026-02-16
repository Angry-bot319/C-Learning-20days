#include <stdio.h>
int main(){
    char c1,c2;
    int n;
    c1=getchar();
    c2=getchar();
    n=c1-'0'+c2-'0';
    printf("n=%d\n",n);
return 0;
}
