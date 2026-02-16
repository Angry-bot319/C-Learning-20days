#include <stdio.h>
int main(){
    float price;
    printf("int类型占用%d个字节.\n",sizeof(int));
    printf("变量price占用%d个字节.\n",sizeof(price));
    printf("实数3.14占用%d个字节.\n",sizeof(3.14));
    printf("字符串\"AB\"占用%d个字节.\n",sizeof("AB"));
    printf("表达式9+5的结果占用%d个字节.\n",sizeof(9+5));
return 0;
}
