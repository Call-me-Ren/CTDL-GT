#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

// Hàm xử lý yêu cầu bài toán
void sapXepChanLe(vector<int> &arr) {
    vector<int> chan, le;

    // Bước 1: Tách số chẵn, số lẻ
    for (int num : arr) {
        if (num != 0) {
            if (num % 2 == 0) chan.push_back(num);
            else le.push_back(num);
        }
    }

    // Bước 2: Sắp xếp
    sort(chan.begin(), chan.end());       // Số chẵn tăng dần
    sort(le.begin(), le.end(), greater<int>()); // Số lẻ giảm dần

    // Bước 3: Đưa số đã sắp xếp vào lại mảng gốc
    int idxChan = 0, idxLe = 0;
    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] != 0) {
            if (arr[i] % 2 == 0) arr[i] = chan[idxChan++];
            else arr[i] = le[idxLe++];
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
