/*从键盘输入多个字符串，输入空字符串时，
输出其中最长的字符串及其长度*/
#include <stdio.h>
#include <string.h>
int main(){
    char str[80],max[80];
    int maxlen,len;
    printf("Input String:\n");
    gets(str);
    strcpy(max,str);
    maxlen=strlen(str);
    while(str[0]!='\0'){
        gets(str);
        len=strlen(str);
        if(len>maxlen){
            maxlen=len;
            strcpy(max,str);
        }
    }
    printf("String: %s\nLength: %d\n",max,maxlen);
return 0;
}
