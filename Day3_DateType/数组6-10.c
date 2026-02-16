/*从键盘输出一个字符串，不使用strlen函数，
计算并输出该字符串的长度*/
#include <stdio.h>
#include <string.h>
int main(){
    char str[81];//定义字符数组存放字符串
    int length;
    printf("Input a String:");
    gets(str);//输入一个字符串，存放在数组str中
    length=0;//初始长度等于0
    while(str[length]!='\0'){
        length++;
    }
    printf("length=%d\n",length);
return 0;
}


