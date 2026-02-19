#include <stdio.h>

// 函数声明
void print_array(int arr[], int n);
int array_sum(int arr[], int n);
double array_avg(int arr[], int n);
int array_max(int arr[], int n);
int array_min(int arr[], int n);
void array_double(int arr[], int n);

int main() {
    int scores[] = {78, 92, 85, 64, 99, 88, 76};
    int n = sizeof(scores) / sizeof(scores[0]);

    printf("原始数组：");
    print_array(scores, n);

    printf("总和：%d\n", array_sum(scores, n));
    printf("平均：%.2f\n", array_avg(scores, n));
    printf("最大值：%d\n", array_max(scores, n));
    printf("最小值：%d\n", array_min(scores, n));

    array_double(scores, n);
    printf("翻倍后：");
    print_array(scores, n);

    return 0;
}

void print_array(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int array_sum(int arr[], int n) {
    int sum = 0;
    for (int i = 0; i < n; i++) sum += arr[i];
    return sum;
}

double array_avg(int arr[], int n) {
    return (double)array_sum(arr, n) / n;
}

int array_max(int arr[], int n) {
    int max = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] > max) max = arr[i];
    }
    return max;
}

int array_min(int arr[], int n) {
    int min = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] < min) min = arr[i];
    }
    return min;
}

void array_double(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        arr[i] *= 2;
    }
}
