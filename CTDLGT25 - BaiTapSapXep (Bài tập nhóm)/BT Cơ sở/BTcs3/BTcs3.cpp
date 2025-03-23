#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void generateRandomArray(int array[], int n) {
    srand(time(NULL)); // Sử dụng thời gian hiện tại làm seed cho hàm rand
    for (int i = 0; i < n; i++) {
        array[i] = rand() % 1000; // Tạo ra các số nguyên ngẫu nhiên trong khoảng từ 0 đến 999
    }
}

int main() {
    int n = 100; // Độ dài của mảng
    int array[n];
    generateRandomArray(array, n);

    // In mảng ngẫu nhiên
    for (int i = 0; i < n; i++) {
        printf("%d ", array[i]);
    }

    return 0;
}
