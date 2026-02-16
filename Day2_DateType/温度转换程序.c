#include <stdio.h>

int main(){
    printf("温度转换器\n\n");

    float celsius,fahrenheit;

    //摄氏转华氏
    printf("请输入摄氏温度：");
    scanf("%f",&celsius);
    fahrenheit=celsius*9.0/5.0+32;
    printf("摄氏%.1f度=华氏%.1f度\n\n",celsius,fahrenheit);

    //华氏转摄氏
    printf("请输入华氏温度：");
    scanf("%f",&fahrenheit);
    celsius=(fahrenheit-32)*5.0/9.0;
    printf("华氏%.1f度=摄氏%.1f度\n",fahrenheit,celsius);

    return 0;

}

