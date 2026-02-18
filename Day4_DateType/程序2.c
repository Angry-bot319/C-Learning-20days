#include <stdio.h>
float A(float height,float weight);
void B(float bmi);//输出文字没有返回值用void
void C(float bmi);

int main(){
    float height,weight,bmi;

    printf("(BMI健康分析系统):\n");
    printf("请输入身高(m):");
    scanf("%f",&height);
    printf("请输入体重(kg):");
    scanf("%f",&weight);

    bmi=A(height,weight);//实参表不加类型，返回值用作赋值

    printf("\n(分析报告):\n");
    printf("身高:%.2f米\n",height);
    printf("体重:%.1f公斤\n",weight);
    printf("BMI:%.1f\n",bmi);

    B(bmi);//函数调用语句方式（void）
    C(bmi);
return 0;
}
//函数具体语句
float A(float height,float weight){
    return weight/(height*height);
}

void B(float bmi){
    printf("\n【BMI分类】");
    if (bmi < 18.5) {
        printf("体重过轻\n");
    } else if (bmi < 24) {
        printf("正常范围\n");
    } else if (bmi < 28) {
        printf("超重\n");
    } else {
        printf("肥胖\n");
    }
}

void C(float bmi) {
    printf("\n【健康建议】");
    if (bmi < 18.5) {
        printf("适当增加营养，加强锻炼\n");
    } else if (bmi < 24) {
        printf("保持良好生活习惯\n");
    } else if (bmi < 28) {
        printf("注意饮食，增加运动\n");
    } else {
        printf("建议咨询医生，制定减重计划\n");
    }
}
