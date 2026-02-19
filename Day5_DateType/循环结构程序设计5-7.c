#include <stdio.h>
int main(){
    int i,count=0;
    for(i=100;i<=1000;i++){
        if(i%7==0){
            continue;
        }
        count++;
    }
    printf("count=%d\n",count);
return 0;
}
