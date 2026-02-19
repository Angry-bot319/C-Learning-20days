#include <stdio.h>
//×Ö·ûÊäÈëch=getchar()
int main(){
    int count=0;
    char ch;
    ch=getchar();
    while(ch!='\n'){
        if(ch>'0'&&ch<'9')
            count++;
        ch=getchar();

    }
    printf("number of digit:%d\n",count);
return 0;
}
