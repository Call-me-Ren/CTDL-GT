#include <iostream>
#include <cstring>
using namespace std;

// Định nghĩa cấu trúc dữ liệu
struct PhongThi {
    int soPhong;
    char nha;
    int khaNangChua;
};

// Hàm nhập thông tin
void nhapThongTin(PhongThi ds[], int &n) {
    cout << "Nhap so luong phong thi: ";
    cin >> n;
    for (int i = 0; i < n; i++) {
        cout << "Phong " << i + 1 << ":\n";
        cout << "  So phong: ";
        cin >> ds[i].soPhong;
        cout << "  Nha: ";
        cin >> ds[i].nha;
        cout << "  Kha nang chua: ";
        cin >> ds[i].khaNangChua;
    }
}

// Hàm in danh sách phòng thi
void inDanhSach(PhongThi ds[], int n) {
    for (int i = 0; i < n; i++) {
        cout << "Phong: " << ds[i].soPhong
             << ", Nha: " << ds[i].nha
             << ", Kha nang chua: " << ds[i].khaNangChua << endl;
    }
}

// Hàm sắp xếp giảm dần theo khả năng chứa
void sapXepGiamDanTheoKhaNangChua(PhongThi ds[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (ds[i].khaNangChua < ds[j].khaNangChua) {
                swap(ds[i], ds[j]);
            }
        }
    }
}

// Hàm sắp xếp tăng dần theo nhà, cùng nhà thì tăng theo số phòng
void sapXepTangDanTheoNhaVaSoPhong(PhongThi ds[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (ds[i].nha > ds[j].nha || 
               (ds[i].nha == ds[j].nha && ds[i].soPhong > ds[j].soPhong)) {
                swap(ds[i], ds[j]);
            }
        }
    }
}

// Hàm sắp xếp tăng dần theo nhà, cùng nhà thì giảm theo khả năng chứa
void sapXepTangDanTheoNhaVaGiamKhaNangChua(PhongThi ds[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (ds[i].nha > ds[j].nha || 
               (ds[i].nha == ds[j].nha && ds[i].khaNangChua < ds[j].khaNangChua)) {
                swap(ds[i], ds[j]);
            }
        }
    }
}

// Chương trình chính
int main() {
    PhongThi ds[200];
    int n;

    // Nhập thông tin
    nhapThongTin(ds, n);

    // Sắp xếp và in theo từng yêu cầu
    cout << "\nDanh sach giam dan theo kha nang chua:\n";
    sapXepGiamDanTheoKhaNangChua(ds, n);
    inDanhSach(ds, n);

    cout << "\nDanh sach tang dan theo nha va so phong:\n";
    sapXepTangDanTheoNhaVaSoPhong(ds, n);
    inDanhSach(ds, n);

    cout << "\nDanh sach tang dan theo nha va giam kha nang chua:\n";
    sapXepTangDanTheoNhaVaGiamKhaNangChua(ds, n);
    inDanhSach(ds, n);

    return 0;
