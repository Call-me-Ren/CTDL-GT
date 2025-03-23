// ===== BÀI 1: DANH SÁCH LIÊN KẾT SỐ NGUYÊN =====
#include <iostream>
using namespace std;

struct NodeInt {
    int data;
    NodeInt* next;
    NodeInt(int val) : data(val), next(nullptr) {}
};

struct ListInt {
    NodeInt* head;
    
    ListInt() { head = nullptr; }
    
    void them(int value) {
        NodeInt* newNode = new NodeInt(value);
        if (!head) head = newNode;
        else {
            NodeInt* temp = head;
            while (temp->next) temp = temp->next;
            temp->next = newNode;
        }
    }
    
    void xoa(int value) {
        while (head && head->data == value) {
            NodeInt* temp = head;
            head = head->next;
            delete temp;
        }
        NodeInt* curr = head;
        while (curr && curr->next) {
            if (curr->next->data == value) {
                NodeInt* temp = curr->next;
                curr->next = temp->next;
                delete temp;
            } else {
                curr = curr->next;
            }
        }
    }
    
    void inDanhSach() {
        NodeInt* temp = head;
        while (temp) {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }
};

int main() {
    ListInt ds1;
    cout << "Nhap 10 so nguyen: ";
    for (int i = 0; i < 10; i++) {
        int x; cin >> x;
        ds1.them(x);
    }
    ds1.inDanhSach();
    
    cout << "Nhap so can xoa: ";
    int k; cin >> k;
    ds1.xoa(k);
    ds1.inDanhSach();
    
    return 0;
}
