#include <stdio.h>

// 函数声明：计算字符串长度（不使用标准库函数）
int my_strlen(char str[]);

int main() {
    char str[] = "Hello, Function";  // 测试字符串
    printf("字符串: %s\n", str);
    printf("长度: %d\n", my_strlen(str));  // 正确调用函数并传入参数
    return 0;
}

// 自定义字符串长度函数
int my_strlen(char str[]) {
    int len = 0;
    // 遍历字符数组，直到遇到字符串结束符 '\0'
    while (str[len] != '\0') {
        len++;
    }
    return len;
}
