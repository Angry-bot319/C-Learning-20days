#include <stdio.h>

void bubble_sort(int arr[], int n);
void print_array(int arr[], int n);

int main() {
    int numbers[] = {5, 2, 8, 1, 9, 3, 7, 4, 6};
    int n = sizeof(numbers) / sizeof(numbers[0]);

    printf("≈≈–Ú«∞£∫");
    print_array(numbers, n);

    bubble_sort(numbers, n);

    printf("≈≈–Ú∫Û£∫");
    print_array(numbers, n);

    return 0;
}

void bubble_sort(int arr[], int n) {
    int temp;
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - 1 - i; j++) {
            if (arr[j] > arr[j + 1]) {
                // Ωªªª
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

void print_array(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
