#include <stdio.h>
char *reverse(char *s);
int main(){
    char str[] ="Hello World";
    char *revstr;
    revstr=reverse(str);
    puts(revstr);
return 0;
}
char *reverse(char *s){
    char c,*p,*q;
    p=q=s;
    while(*p!='\0')p++;//循环使p指向'\0'
    p--;//使p指向最后一个字符
    while(q<p){//循环交换对称的字符
        c=*q;
        *q=*p;
        *p=c;
        p--;//p指针前移
        q++;//q指针后移
    }
    return s;
}
