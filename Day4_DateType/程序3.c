#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// 函数声明
int generate_random_number(int min, int max);
int get_user_guess();
void give_hint(int guess, int target);
void print_congratulations(int attempts);

int main() {
    int target, guess, attempts = 0;

    srand(time(0));
    target = generate_random_number(1, 100);

    printf("猜数字游戏\n");
    printf("我已经想好了1-100之间的一个数字，你能猜猜吗？\n\n");

    do {
        guess = get_user_guess();
        attempts++;

        if (guess == target) {
            print_congratulations(attempts);
            break;
        } else {
            give_hint(guess, target);
        }

    } while (1);  // 猜对后break退出

    return 0;
}

// 生成随机数
int generate_random_number(int min, int max) {
    return rand() % (max - min + 1) + min;
}

// 获取用户输入
int get_user_guess() {
    int guess;
    printf("请输入你的猜测: ");
    scanf("%d", &guess);
    return guess;
}

// 给出提示
void give_hint(int guess, int target) {
    if (guess < target) {
        printf("太小了！再试试。\n\n");
    } else {
        printf("太大了！再试试。\n\n");
    }
}

// 打印祝贺信息
void print_congratulations(int attempts) {
    printf("\n恭喜你！猜对了！\n");
    printf("你一共猜了 %d 次。\n", attempts);

    if (attempts <= 3) {
        printf("太厉害了！你是猜数字大师！\n");
    } else if (attempts <= 7) {
        printf("不错！继续加油！\n");
    } else {
        printf("多练习会更好哦！\n");
    }
}
