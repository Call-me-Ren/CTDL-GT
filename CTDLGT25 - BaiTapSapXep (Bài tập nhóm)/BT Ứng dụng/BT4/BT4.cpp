#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

// Hàm kiểm tra số nguyên tố
bool isPrime(int n) {
    if (n < 2) return false;
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) return false;
    }
    return true;
}

// Tìm số nguyên tố lớn nhất trong ma trận
int findMaxPrime(const vector<vector<int>> &matrix) {
    int maxPrime = -1;
    for (const auto &row : matrix) {
        for (int num : row) {
            if (isPrime(num) && num > maxPrime) {
                maxPrime = num;
            }
        }
    }
    return maxPrime;
}

// Tìm các dòng chứa ít nhất một số nguyên tố
vector<int> findRowsWithPrime(const vector<vector<int>> &matrix) {
    vector<int> rows;
    for (int i = 0; i < matrix.size(); i++) {
        for (int num : matrix[i]) {
            if (isPrime(num)) {
                rows.push_back(i);
                break;  // Chỉ cần tìm thấy 1 số nguyên tố là đủ
            }
        }
    }
    return rows;
}

// Tìm các dòng chỉ chứa toàn số nguyên tố
vector<int> findRowsAllPrime(const vector<vector<int>> &matrix) {
    vector<int> rows;
    for (int i = 0; i < matrix.size(); i++) {
        bool allPrime = true;
        for (int num : matrix[i]) {
            if (!isPrime(num)) {
                allPrime = false;
                break;
            }
        }
        if (allPrime) {
            rows.push_back(i);
        }
    }
    return rows;
}

int main() {
    int m, n;
    cout << "Nhap so dong m: ";
    cin >> m;
    cout << "Nhap so cot n: ";
    cin >> n;

    vector<vector<int>> matrix(m, vector<int>(n));

    // Nhập ma trận
    cout << "Nhap cac phan tu cua ma tran:\n";
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cin >> matrix[i][j];
        }
    }

    // Tìm số nguyên tố lớn nhất
    int maxPrime = findMaxPrime(matrix);
    if (maxPrime == -1) {
        cout << "Khong co so nguyen to trong ma tran.\n";
    } else {
        cout << "So nguyen to lon nhat: " << maxPrime << endl;
    }

    // Tìm các dòng chứa số nguyên tố
    vector<int> rowsWithPrime = findRowsWithPrime(matrix);
    cout << "Cac dong co chua so nguyen to: ";
    if (rowsWithPrime.empty()) {
        cout << "Khong co dong nao.\n";
    } else {
        for (int row : rowsWithPrime) {
            cout << row + 1 << " ";  // Đánh số dòng từ 1
        }
        cout << endl;
    }

    // Tìm các dòng chỉ chứa số nguyên tố
    vector<int> rowsAllPrime = findRowsAllPrime(matrix);
    cout << "Cac dong chi chua so nguyen to: ";
    if (rowsAllPrime.empty()) {
        cout << "Khong co dong nao.\n";
    } else {
        for (int row : rowsAllPrime) {
            cout << row + 1 << " ";
        }
        cout << endl;
    }

    return 0;
}
