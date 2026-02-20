#include <stdio.h>
void sort(int array[],int n);
int main(){
    int a[10],i;
    printf("输入10个整数：");
    for(i=0;i<10;i++){
        scanf("%d",&a[i]);
    }
    sort(a,10);
    printf("升序排序后结果：");
    for(i=0;i<10;i++){
        printf("%d ",a[i]);
    }
return 0;
}

void sort(int array[],int n){
    int i,j,k,temp;
    for(i=0;i<n-1;i++)//排序共进行n-1趟
    {
        k=i;//k记录本趟最小元素的下标，初始假设下标为i的元素最小
        for(j=i+1;j<n;j++){
            if(array[j]<array[k]){
                k=j;//如果找到更小的，记录下标
            }
        }
        if(k!=i){//如果本趟找到的最小值下标不是i，则交换
            temp=array[k];
            array[k]=array[i];
            array[i]=temp;
        }
    }
}
