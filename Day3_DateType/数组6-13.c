/*从键盘输入3个字符串，
按照从小到大的顺序输出这3个字符串*/
//字符串保存的是ASCII码!!!!!!
#include <stdio.h>
#include <string.h>
//二维数组
int main(){
    char str[3][80];
    char temp[80];//有比大小比长度都建议定义一个temp作为转换中介
    int i;

    printf("Input 3 Strings:\n");

    for(i=0;i<3;i++){
       gets(str[i]); //输入第i个字符串而不是字符串的第i个字符
    }   //这是循环输入三个字符串，不能和下面比较过程一起写在for循环里面
    if(strcmp(str[0],str[1])>0){//如果str[0]>str[1],交换它们的值
        strcpy(temp,str[0]);
        strcpy(str[0],str[1]);
        strcpy(str[1],temp);
    }
    if(strcmp(str[0],str[2])>0){
        strcpy(temp,str[0]);
        strcpy(str[0],str[2]);
        strcpy(str[2],temp);
    }
    if(strcmp(str[1],str[2])>0){
        strcpy(temp,str[1]);
        strcpy(str[1],str[2]);
        strcpy(str[2],temp);
    }


    printf("After sort:\n");

    for(i=0;i<3;i++){
        puts(str[i]);       //输出第i个字符串
    }

return 0;
}
