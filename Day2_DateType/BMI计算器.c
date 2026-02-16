#include <stdio.h>

int main(){
    printf("BMI计算器\n\n");

    float height,weight,bmi;

    printf("请输入身高(米)：");
    scanf("%f",&height);

    printf("请输入体重(公斤)：");
    scanf("%f",&weight);

    bmi=weight/(height*height);

    printf("\n计算结果:\n");
    printf("    身高:%.2f米\n",height);
    printf("    体重:%.1f公斤\n",weight);
    printf("    BMI:%.1f\n",bmi);

    printf("\n健康评估:\n");
    if(bmi<18.5){
        printf("    体重过轻\n");
    }else if(bmi<24){
        printf("    正常范围\n");
    }else if(bmi<28){
        printf("    超重\n");
    }else{
        printf("    肥胖\n");
    }

    return 0;

}
