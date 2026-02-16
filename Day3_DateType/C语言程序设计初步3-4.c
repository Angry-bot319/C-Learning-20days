#include <stdio.h>
int main(){
    char c;
    c=getchar();//输入一个小写字母
    c=c-32;//转换为对应的大写字母
    putchar(c);
return 0;
}
