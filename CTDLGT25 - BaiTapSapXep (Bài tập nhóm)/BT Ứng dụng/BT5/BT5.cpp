#include <iostream>
#include <vector>

using namespace std;

// Hàm tính tổng một dòng
int tinhTongDong(const vector<int> &dong) {
    int tong = 0;
    for (int num : dong) {
        tong += num;
    }
    return tong;
}

// Tìm dòng có tổng lớn nhất
int timDongTongLonNhat(const vector<vector<int>> &matrix) {
    int maxTong = -1, dongMax = -1;
    for (int i = 0; i < matrix.size(); i++) {
        int tong = tinhTongDong(matrix[i]);
        if (tong > maxTong) {
            maxTong = tong;
            dongMax = i;
        }
    }
    return dongMax;
}

// Sắp xếp các dòng theo tổng giảm dần (Bubble Sort để sinh viên dễ hiểu)
void sapXepDong(vector<vector<int>> &matrix) {
    int m = matrix.size();
    vector<int> tongDong(m);

    // Tính tổng từng dòng
    for (int i = 0; i < m; i++) {
        tongDong[i] = tinhTongDong(matrix[i]);
    }

    // Sắp xếp dòng theo tổng giảm dần
    for (int i = 0; i < m - 1; i++) {
        for (int j = i + 1; j < m; j++) {
            if (tongDong[i] < tongDong[j]) {
                swap(tongDong[i], tongDong[j]);
                swap(matrix[i], matrix[j]);
            }
        }
    }
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

    // Tìm dòng có tổng lớn nhất
    int dongMax = timDongTongLonNhat(matrix);
    cout << "Dong co tong lon nhat: " << dongMax + 1 << endl; // Đánh số từ 1

    // Sắp xếp các dòng theo tổng giảm dần
    sapXepDong(matrix);

    // Xuất ma trận sau khi sắp xếp
    cout << "Ma tran sau khi sap xep:\n";
    for (const auto &row : matrix) {
        for (int num : row) {
            cout << num << " ";
        }
        cout << endl;
    }

    return 0;
}
