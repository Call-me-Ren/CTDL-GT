#include <iostream>
#include <fstream>
#include <cstring>
using namespace std;

#define MAX 100 // Số lượng sinh viên tối đa

struct SinhVien {
  int maSo;
  char hoDem[21];
  char ten[41];
  int ngay, thang, nam;
  char phai[4];
  float diemTB;
};

void nhapSinhVien(SinhVien ds[], int &n) {
  cout << "Nhap so luong sinh vien: ";
  cin >> n;
  while (n < 10) {
      cout << "Can nhap it nhat 10 sinh vien. Nhap lai: ";
      cin >> n;
  }

  for (int i = 0; i < n; i++) {
      SinhVien sv;
      bool trungMa;
      do {
          trungMa = false;
          cout << "Nhap ma so: "; cin >> sv.maSo;
          for (int j = 0; j < i; j++) {
              if (ds[j].maSo == sv.maSo) {
                  trungMa = true;
                  cout << "Ma so bi trung! Nhap lai.\n";
                  break;
              }
          }
      } while (trungMa);

      cin.ignore();
      cout << "Nhap ho va dem: "; cin.getline(sv.hoDem, 21);
      cout << "Nhap ten: "; cin.getline(sv.ten, 41);
      cout << "Nhap ngay sinh (Ngay Thang Nam): "; cin >> sv.ngay >> sv.thang >> sv.nam;
      cout << "Nhap gioi tinh (Nam/Nu): "; cin >> sv.phai;
      cout << "Nhap diem trung binh: "; cin >> sv.diemTB;

      ds[i] = sv;
  }
}

void ghiFile(const char *filename, SinhVien ds[], int n) {
  ofstream file(filename, ios::binary);
  file.write(reinterpret_cast<char*>(ds), n * sizeof(SinhVien));
  file.close();
}

void docFile(const char *filename, SinhVien ds[], int &n) {
  ifstream file(filename, ios::binary);
  file.read(reinterpret_cast<char*>(ds), MAX * sizeof(SinhVien));
  n = file.gcount() / sizeof(SinhVien);
  file.close();
}

void sapXepTheoMaSo(SinhVien ds[], int n) {
  for (int i = 0; i < n - 1; i++) {
      for (int j = i + 1; j < n; j++) {
          if (ds[i].maSo > ds[j].maSo) {
              swap(ds[i], ds[j]);
          }
      }
  }
}

void sapXepTheoTen(SinhVien ds[], int n) {
  for (int i = 0; i < n - 1; i++) {
      for (int j = i + 1; j < n; j++) {
          if (strcmp(ds[i].ten, ds[j].ten) > 0 || (strcmp(ds[i].ten, ds[j].ten) == 0 && strcmp(ds[i].hoDem, ds[j].hoDem) > 0)) {
              swap(ds[i], ds[j]);
          }
      }
  }
}

void sapXepTheoDiemTB(SinhVien ds[], int n) {
  for (int i = 0; i < n - 1; i++) {
      for (int j = i + 1; j < n; j++) {
          if (ds[i].diemTB < ds[j].diemTB) {
              swap(ds[i], ds[j]);
          }
      }
  }
}

void ghiChiMuc(const char *filename, SinhVien ds[], int n) {
  ofstream file(filename, ios::binary);
  for (int i = 0; i < n; i++) {
      file.write(reinterpret_cast<char*>(&ds[i].maSo), sizeof(int));
  }
  file.close();
}

void hienThi(SinhVien ds[], int n) {
  cout << "\nDanh sach sinh vien:" << endl;
  for (int i = 0; i < n; i++) {
      cout << ds[i].maSo << " - " << ds[i].hoDem << " " << ds[i].ten << " - " << ds[i].diemTB << endl;
  }
}

int main() {
  SinhVien ds[MAX];
  int n;

  nhapSinhVien(ds, n);
  ghiFile("SINHVIEN.DAT", ds, n);

  docFile("SINHVIEN.DAT", ds, n);
  sapXepTheoMaSo(ds, n);
  ghiChiMuc("SVMASO.IDX", ds, n);
  hienThi(ds, n);

  docFile("SINHVIEN.DAT", ds, n);
  sapXepTheoTen(ds, n);
  ghiChiMuc("SVTH.IDX", ds, n);
  hienThi(ds, n);

  docFile("SINHVIEN.DAT", ds, n);
  sapXepTheoDiemTB(ds, n);
  ghiChiMuc("SVDTB.IDX", ds, n);
  hienThi(ds, n);

  return 0;
}