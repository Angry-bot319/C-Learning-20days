#include <stdio.h>
#include <string.h>
int main(){
    char *s1,*s2="Welcome to C";
    char s[80];
    int len;
    printf("%s\n",s2);//使用printf输出字符串
    puts(s2);//使用puts函数输出字符串
    strcpy(s,s2);//把字符串复制到字符数组中
    len=strlen(s2);//得到字符串的长度
    printf("len=%d\n",len);
    //循环以间接访问方式逐个输出字符串的字符
    for(s1=s2;*s1!='\0';s1++){
        putchar(*s1);
    }
return 0;
}
