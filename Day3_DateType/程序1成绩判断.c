#include <stdio.h>
int main(){
    printf("成绩等级判断器:\n");
    int score;
    printf("    请输入成绩:");
    scanf("%d",&score);

    if(score<0||score>100){
        printf("    错误:成绩必须在0-100之间\n");
    }else if(score>=90){
        printf("    成绩:%d,等级:A\n",score);
    }else if(score>=80){
        printf("    成绩:%d,等级:B\n",score);
    }else if(score>=70){
        printf("    成绩:%d,等级:C\n",score);
    }else if(score>=60){
        printf("    成绩:%d,等级:D\n",score);
    }else{
        printf("    成绩:%d,等级:E\n",score);
    }
return 0;
}
