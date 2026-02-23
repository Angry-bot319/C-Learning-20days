#include <stdio.h>
#include <string.h>
int main(){
    char str[80];
    char *p;
    printf("输入一个字符串：");
    gets(str);
    p=str;//P指向字符串第1个字符
    while(*p!='\0'){
        p++;
    }
    printf("字符串长度：%d\n",p-str);
return 0;
}
