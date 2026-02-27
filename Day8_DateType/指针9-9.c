#include <stdio.h>
#include <string.h>
int main(){
    char *lang[5]={
        "RUBY",
        "C",
        "PASCAL",
        "BASIC",
        "JAVA"
    };
    char *temp;
    int i,j,k;
    for(i=0;i<4;i++){
        k=i;
        for(j=i+1;j<5;j++){
            if(strcmp(lang[i],lang[k])<0){
                k=j;
            }
        }
        if(k!=i){
            temp=lang[i];
            lang[i]=lang[k];
            lang[k]=temp;
        }
    }
    for(i=0;i<5;i++){
        puts(lang[i]);
    }
return 0;
}
