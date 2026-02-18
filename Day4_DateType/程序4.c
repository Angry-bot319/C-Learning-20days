#include <stdio.h>

// 递归函数声明
long long factorial(int n);
int fibonacci(int n);

int main() {
    int n;

    printf("递归演示\n");

    printf("请输入一个整数（阶乘）: ");
    scanf("%d", &n);
    printf("%d! = %lld\n\n", n, factorial(n));

    printf("斐波那契数列前10项：\n");
    for (int i = 0; i < 10; i++) {
        printf("fib(%d) = %d\n", i, fibonacci(i));
    }

    return 0;
}

// 递归求阶乘
long long factorial(int n) {
    if (n <= 1) {
        return 1;
    }
    return n * factorial(n - 1);
}

// 递归求斐波那契
int fibonacci(int n) {
    if (n <= 1) {
        return n;
    }
    return fibonacci(n - 1) + fibonacci(n - 2);
}
