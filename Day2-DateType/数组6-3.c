#include <stdio.h>
//从键盘输入10个整数，统计其中最大值的出现次数
int main(){
    int i,max,count;
    int a[10];

    for(i=0;i<10;i++){
        scanf("%d",&a[i]);
    }
//我的思路是一团操作步骤，但是要一步一步来
    max=a[0];
    for(i=1;i<10;i++){
//a[i]>a[0]错误写法
        if(a[i]>max){
            max=a[i];
        }
    }
    count=0;
    for(i=0;i<10;i++){
        if(a[i]==max){
            count++;
        }
    }
//总是忘记加换行符，记得特殊条件的换行符如何加
    printf("max=%d,count=%d\n",max,count);

return 0;
}
