#include <stdio.h>
#define N 10

int main(){
    int i,temp;
    int a[N];

    for(i=0;i<10;i++){
        scanf("%d",&a[i]);
        }
    for(i=0;i<=(N-1)/2;i++){
        temp=a[i];
        a[i]=a[N-i-1];
        a[N-1-i]=temp;
    }
    for(i=0;i<N;i++){
        printf("%d ",a[i]);
    }

return 0;
}
