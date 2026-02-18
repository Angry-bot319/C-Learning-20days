#include <stdio.h>
int main(){
    char ch;
    printf("Input a character: ");
    ch=getchar();
    switch(ch){
        case'0':
        case'1':
        case'2':
        case'3':
        case'4':
        case'5':
        case'6':
        case'7':
        case'8':
        case'9':
            printf("digit:%c\n",ch);
            break;
        case' ':
            printf("space\n");
            break;
        default:
            printf("other\n");
    }
return 0;
}
