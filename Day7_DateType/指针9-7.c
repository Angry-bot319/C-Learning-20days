#include <stdio.h>
int main(){
    int a[3][4]={1,2,3,4,5,6,7,6,5,4,3,2};
    int *p,*pmax;
    p=pmax=a[0];
    while(p<a[0]+12){
        if(*p>*pmax){
            pmax=p;
        }
        p++;
    }
    printf("最大值：%d,下标：[%d][%d]\n",*pmax,(pmax-a[0])/4,(pmax-a[0])%4);
return 0;
}
