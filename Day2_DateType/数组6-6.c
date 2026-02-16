#include <stdio.h>

int main(){
    int i,j,min,row,col;
    int a[3][4]={{1,2,3,4},{9,8,10,2},{-10,6,5,2}};
//row=col=0;
//min=a[row][col];
    min=a[0][0];
    for(i=0;i<3;i++){
        for(j=0;j<4;j++){
            if(a[i][j]<min){
                row=i;
                col=j;
                min=a[row][col];
            }
        }
    }
    printf("min=%d,row=%d,col=%d",min,row,col);
return 0;
}
