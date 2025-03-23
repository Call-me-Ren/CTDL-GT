#include <iostream>
using namespace std;

// Định nghĩa cấu trúc để lưu hệ số và bậc
struct Term {
    double coefficient; // Hệ số (số thực)
    int exponent;       // Bậc (số nguyên từ 0 đến 100)
};

// Hàm sắp xếp mảng theo thứ tự tăng dần của bậc
void sortTerms(Term terms[], int n) {
    for (int i = 0; i < n - 1; ++i) {
        for (int j = 0; j < n - i - 1; ++j) {
            if (terms[j].exponent > terms[j + 1].exponent) {
                // Hoán đổi nếu bậc không theo thứ tự tăng dần
                Term temp = terms[j];
                terms[j] = terms[j + 1];
                terms[j + 1] = temp;
            }
        }
    }
}

int main() {
    int n;
    cout << "Nhập số lượng số hạng trong dãy: ";
    cin >> n;

    // Khởi tạo mảng số hạng
    Term terms[100]; // Giả sử tối đa 100 số hạng

    // Nhập dữ liệu cho từng số hạng
    for (int i = 0; i < n; ++i) {
        cout << "Nhập hệ số và bậc của số hạng thứ " << i + 1 << ":\n";
        cout << "Hệ số: ";
        cin >> terms[i].coefficient;
        cout << "Bậc: ";
        cin >> terms[i].exponent;
    }

    // Sắp xếp các số hạng theo thứ tự tăng dần của bậc
    sortTerms(terms, n);

    // Xuất dãy số sau khi sắp xếp
    cout << "Dãy thức sau khi sắp xếp theo thứ tự tăng dần của bậc:\n";
    for (int i = 0; i < n; ++i) {
        cout << terms[i].coefficient << "x^" << terms[i].exponent << " ";
    }
    cout << endl;

    return 0;
}
