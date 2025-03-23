#include <iostream>
#include <vector>

using namespace std;

// Hàm đổi chỗ hai phần tử
void swap(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

// Hàm sắp xếp số chẵn lên đầu, số lẻ về cuối
void sapXepChanLe(vector<int> &arr) {
    int left = 0, right = arr.size() - 1;

    while (left < right) {
        // Nếu arr[left] là số chẵn, không cần đổi, tăng left
        if (arr[left] % 2 == 0) {
            left++;
        }
        // Nếu arr[right] là số lẻ, không cần đổi, giảm right
        else if (arr[right] % 2 == 1) {
            right--;
        }
        // Nếu arr[left] là số lẻ và arr[right] là số chẵn, đổi chỗ
        else {
            swap(arr[left], arr[right]);
            left++;
            right--;
        }
    }
}

int main() {
    int n;
    cout << "Nhap so phan tu: ";
    cin >> n;

    vector<int> arr(n);
    cout << "Nhap cac phan tu: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    sapXepChanLe(arr);

    cout << "Mang sau khi sap xep: ";
    for (int num : arr) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
