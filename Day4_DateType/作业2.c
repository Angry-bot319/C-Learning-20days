#include <stdio.h>

// 函数声明：汉诺塔递归求解，参数为盘子数、源柱、目标柱、辅助柱
void hanoi(int n, char from, char to, char aux);

int main() {
    int n;
    printf("请输入汉诺塔层数: ");
    scanf("%d", &n);
    // 调用汉诺塔函数，将n个盘子从A柱借助B柱移动到C柱
    hanoi(n, 'A', 'C', 'B');
    return 0;
}

// 汉诺塔递归实现
void hanoi(int n, char from, char to, char aux) {
    if (n == 1) {
        // 只有一个盘子时，直接从源柱移动到目标柱
        printf("移动盘子 1 从 %c 到 %c\n", from, to);
    } else {
        // 将上面 n-1 个盘子从源柱借助目标柱移动到辅助柱
        hanoi(n - 1, from, aux, to);
        // 移动最底下的盘子到目标柱
        printf("移动盘子 %d 从 %c 到 %c\n", n, from, to);
        // 将 n-1 个盘子从辅助柱借助源柱移动到目标柱
        hanoi(n - 1, aux, to, from);
    }
}
