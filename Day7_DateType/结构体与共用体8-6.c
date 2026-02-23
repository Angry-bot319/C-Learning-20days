#include <stdio.h>
enum status{pass,failure};
int main(){
    int score;
    enum status test;
    printf("ÊäÈë¿¼ÊÔ³É¼¨£º");
    scanf("%d",&score);
    if(test<60){
        test=failure;
    }else{
        test=pass;
    }
    switch(test){
        case pass:
            printf("pass\n");
            break;
        case failure:
            printf("failure\n");
            break;

    }
return 0;
}
