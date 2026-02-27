#include <stdio.h>
#include <string.h>
int countletters(char *str);
int main(){
    char s[81];
    printf("输入字符串:");
    gets(s);
    printf("英文字母个数:%d\n",countletters(s));
return 0;
}
int countletters(char *str){
    int count=0;
    while(*str!='\0'){
        if(*str>='A'&& *str<='Z'||*str>='a'&& *str<='z')
        {
            count++;
        }
        str++;//指向下一个字符
    }
return count;
}
