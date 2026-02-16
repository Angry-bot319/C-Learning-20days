/*键盘输入字符串，统计并输出字符串中共有多少个单词。
为简化问题，设单词之间用一个或多个空格字符分隔，
非空格字符组成的串都认为是单词。*/
#include <stdio.h>
#include <string.h>
int main(){
    char str[81];
    int i,count=0,word=0;      //word初值为0，表示设第一个字符之前是空格
    gets(str);                //输入字符串
    for(i=0;str[i]!='\0';i++){ //循环逐个检查字符
        if(str[i]==' '){       //碰到空格
            word=0;            //第i个字符是非空格
        }else{                 //碰到非空格
            if(word==0){       //条件成立表示第i-1个字符是空格
            word=1;            //第i个字符是非空格
            count++;           //单词数+1
            }
        }
    }
    printf("count=%d\n",count);
return 0;
}
