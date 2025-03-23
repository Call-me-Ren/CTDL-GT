// ===== BÀI 2: DANH SÁCH LIÊN KẾT SINH VIÊN =====
#include <iostream>
#include <string>
using namespace std;

struct SinhVien {
    string hoTen, diaChi, lop;
    int khoa;
};

struct NodeSV {
    SinhVien data;
    NodeSV* next;
    NodeSV(SinhVien sv) : data(sv), next(nullptr) {}
};

struct ListSV {
    NodeSV* head;
    
    ListSV() { head = nullptr; }
    
    void them(SinhVien sv) {
        NodeSV* newNode = new NodeSV(sv);
        if (!head) head = newNode;
        else {
            NodeSV* temp = head;
            while (temp->next) temp = temp->next;
            temp->next = newNode;
        }
    }
    
    void xoaTheoTen(const string& name) {
        while (head && head->data.hoTen == name) {
            NodeSV* temp = head;
            head = head->next;
            delete temp;
        }
        NodeSV* curr = head;
        while (curr && curr->next) {
            if (curr->next->data.hoTen == name) {
                NodeSV* temp = curr->next;
                curr->next = temp->next;
                delete temp;
            } else {
                curr = curr->next;
            }
        }
    }
    
    void inDanhSach() {
        NodeSV* temp = head;
        while (temp) {
            cout << temp->data.hoTen << " - " << temp->data.diaChi << " - "
                 << temp->data.lop << " - " << temp->data.khoa << endl;
            temp = temp->next;
        }
    }
};

int main() {
    ListSV dsSV;
    for (int i = 0; i < 10; i++) {
        SinhVien sv;
        cout << "Nhap sinh vien thu " << i + 1 << ": ";
        cin.ignore();
        getline(cin, sv.hoTen);
        getline(cin, sv.diaChi);
        getline(cin, sv.lop);
        cin >> sv.khoa;
        dsSV.them(sv);
    }
    dsSV.inDanhSach();
    
    dsSV.xoaTheoTen("Nguyen Van Teo");
    
    SinhVien newSV = {"Tran Thi Mo", "25 Hong Bang", "TT0901", 2009};
    dsSV.them(newSV);
    dsSV.inDanhSach();
    
    return 0;
}
