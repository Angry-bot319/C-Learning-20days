#include <stdio.h>
int main() {
    int a,b,c;
    printf("Input 2 integer(a b):");
    scanf("%d%d",&a,&b);
    if(a<b){
        c=a;
        a=b;
        b=c;
    }
    printf("%d %d",a,b);
return 0;
}
