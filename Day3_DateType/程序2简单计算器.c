#include <stdio.h>
int main(){
    printf("简单计算器\n");
    double num1,num2,result;
    char operator;

    printf("    请输入第1个数字:");
    scanf("%lf",&num1);
    printf("    请输入运算符:");
    scanf(" %c",&operator);//注意%c前空格
    printf("    请输入第2个数字:");
    scanf("%lf",&num2);

    switch(operator){
        case'+':
            result=num1+num2;
            printf("    %.2lf\n",result);
            break;

        case'-':
            result=num1-num2;
            printf("    %.2lf\n",result);
            break;

        case'*':
            result=num1*num2;
            printf("    %.2lf\n",result);
            break;

        case'/':
            if(num2!=0){
                result=num1/num2;
                printf("    %.2lf\n",result);
            }else{
                printf("    除数不为0\n");
            }
            break;
        default:
            printf("    无效运算符\n");
    }

return 0;
}
