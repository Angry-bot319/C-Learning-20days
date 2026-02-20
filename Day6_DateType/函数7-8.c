#include <stdio.h>
int max(int array[][4],int row);
void display(int array[][4],int row);//输出4列二维数组
int main(){
    int a[3][4]={{1,3,5,7},{4,66,33,18},{6,8,9,3}};
    int b[2][4]={{11,23,55,22},{6,8,9,3}};
    printf("数组a:\n");
    display(a,3);
    printf("数组a的最大值:%d\n",max(a,3));
    printf("数组b:\n");
    display(b,2);
    printf("数组b的最大值:%d\n",max(b,2));
return 0;
}

int max(int array[][4],int row){
    int i,j,m;
    m=array[0][0];
    for(i=0;i<row;i++){
        for(j=0;j<4;j++){
            if(array[i][j]>m)
                m=array[i][j];
        }
    }
    return m;
}

void display(int array[][4],int row){
    int i,j;
    for(i=0;i<row;i++){
        for(j=0;j<4;j++){
            printf("%4d",array[i][j]);
        }
        printf("\n");
    }
}
