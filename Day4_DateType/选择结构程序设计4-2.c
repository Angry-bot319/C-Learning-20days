#include <stdio.h>
int main(){
    int x;
    printf("Input an integer:");
    scanf("%d",&x);
    if(x<0)
       x=-x;//只有本句是if结构的语句
    printf("|x|=%d\n",x);
return 0;
}
