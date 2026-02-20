#include <stdio.h>
void reverse(int array[],int n);
int main(){
    int i,a[10]={10,11,12,13,14,15,16,17,18,19};
    printf("调用reverse函数之前：");
    for(i=0;i<10;i++){
        printf("%d ",a[i]);
    }
    printf("\n");
    reverse(a,10);
    printf("调用reverse函数之后：");
    for(i=0;i<10;i++){
        printf("%d ",a[i]);
    }
return 0;
}

void reverse(int array[],int n){
    int i,temp;
    for(i=0;i<=n/2;i++){
        temp=array[i];
        array[i]=array[n-1-i];
        array[n-1-i]=temp;
    }
}
