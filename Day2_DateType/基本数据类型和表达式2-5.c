#include <stdio.h>
int main(){
    char c='A';
    int n=65;
    printf("c=%c,n=%c\n",c,n);
    printf("c=%d,n=%d\n",c,n);
    c=c+32;
    printf("c as char=%c,c as int=%d\n",c,c);
return 0;
}
