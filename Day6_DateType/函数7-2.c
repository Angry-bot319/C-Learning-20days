#include <stdio.h>
void Output_Level(double score){
    if(score>=90)
        printf("Level A\n");
    else if(score>=80)
        printf("Level B\n");
    else if(score>=70)
        printf("Level C\n");
    else if(score>=60)
        printf("Level D\n");
    else
        printf("Level F\n");
    return;//可省略该句
}
int main(){
    double sc;
    printf("Input score:");
    scanf("%d",&sc);
    Output_Level(sc);//以函数语句方式调用，别再写printf了
return 0;
}
