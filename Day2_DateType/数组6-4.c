//冒泡排序
#include <stdio.h>
#define N 10

int main(){
    int i,j,temp;
    int a[N];

    for(i=0;i<N;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<N-1;i++){       //排序的趟
        for(j=0;j<N-i-1;j++){ //第i趟中相邻数据的比较与交换
            if(a[j]>a[j+1]){  //如果相邻不是升序则交换
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
    for(i=0;i<N;i++){
        printf("%d ",a[i]);
    }
return 0;
}
