#include <stdio.h>
int main(){
    int arr[3][5]={
        {11,12,13,14,15},
        {21,22,23,24,25},
        {31,32,33,34,35}
    };
    int col,row,(*p)[5];
    printf("行下标(0-2):");
    scanf("%d",&row);
    p=arr+row;  //p指向二维数组第row行的一维数组
    for(col=0;col<5;col++){
    printf("%d",*(*p+col));//*p等价于&arr[row][0]
    }
return 0;
}
