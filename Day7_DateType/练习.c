#include <stdio.h>
long long sum(int array[],int n){
    int i,j;
    int a;
    long long s=0;
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            a=(array[i]+array[j])/2;
            s+=a;
        }
    }
    return s;
}
int main(){
    int i,m;
    scanf("%d",&m);
    for(i=0;i<m;i++){
        int j,n;
        scanf("%d",&n);
        int a[n];
        for(j=0;j<n;j++){
            scanf("%d",&a[j]);
        }
        printf("%ld",sum(a,n));
    }

return 0;
}
