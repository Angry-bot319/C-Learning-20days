#include <stdio.h>
int main(){
    int i,j;
    char c='*';
    char str[5][5];
    for(i=0;i<5;i++){
        for(j=0;j<5;j++){
            if(j<=i){
                str[i][j]=c;
                printf("%c",str[i][j]);
            }
        }
        printf("\n");
    }
return 0;
}
