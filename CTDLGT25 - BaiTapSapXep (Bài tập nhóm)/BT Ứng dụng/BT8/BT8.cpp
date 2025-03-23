#include <iostream>

using namespace std;

const int MAX_N = 100; // Giới hạn kích thước mảng
int A[MAX_N], B[MAX_N], N;

// Hàm tính mảng nghịch thế B từ hoán vị A
void computeInverseArray(int A[], int B[], int N) {
    for (int i = 0; i < N; i++) {
        B[i] = 0;
        for (int j = 0; j < i; j++) {
            if (A[j] > A[i]) {
                B[i]++;
            }
        }
    }
}

// Hàm tìm lại hoán vị A từ mảng nghịch thế B
void computePermutation(int B[], int A[], int N) {
    bool used[MAX_N] = {false}; // Đánh dấu số đã dùng

    for (int i = N - 1; i >= 0; i--) {
        int count = B[i];
        for (int num = 1; num <= N; num++) {
            if (!used[num]) {
                if (count == 0) {
                    A[i] = num;
                    used[num] = true;
                    break;
                }
                count--;
            }
        }
    }
}

// Hàm hiển thị mảng
void printArray(int arr[], int N) {
    for (int i = 0; i < N; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    cout << "Nhap N: ";
    cin >> N;

    cout << "Nhap hoan vi A: ";
    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }

    // Tính mảng nghịch thế B
    computeInverseArray(A, B, N);
    cout << "Mang nghich the B: ";
    printArray(B, N);

    // Tìm lại hoán vị A từ B
    int A2[MAX_N];
    computePermutation(B, A2, N);
    cout << "Hoan vi A tu B: ";
    printArray(A2, N);

    return 0;
}