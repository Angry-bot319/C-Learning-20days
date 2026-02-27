#include <stdio.h>
#include <stdlib.h>
int main(){
    int *list,*p,n;
    printf("输入考试人数：");
    scanf("%d",&n);
    list=(int *)malloc(n*sizeof(int));
    printf("输入[%d]个考试成绩：",n);
    for(p=list;p<list+n;p++){
        scanf("%d",p);
    }
    printf("不及格的成绩有：");
    for(p=list;p<list+n;p++){
        if(*p<60){
            printf("%d ",*p);
        }
    }
return 0;
}
