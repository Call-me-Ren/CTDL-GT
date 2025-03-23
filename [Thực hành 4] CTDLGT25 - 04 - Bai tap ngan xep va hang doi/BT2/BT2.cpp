#include <iostream>
#include <queue>
#include <vector>
#include <algorithm> // Bổ sung thiếu max_element
#include <limits>    // Để xử lý nhập sai

using namespace std;

//Họ và tên: Nguyễn Trí Cường
//MSSV: 3124411049
//Lớp: DCT124C7
#define MAX 100

class QueueInt {
private:
    int arr[MAX]; // Mảng lưu trữ phần tử hàng đợi
    int front, rear;
public:
    void InitQueue() { front = rear = -1; }

    bool IsEmpty() { return front == -1; }

    bool IsFull() { return rear == MAX - 1; }

    bool PushQueue(int x) {
        if (IsFull()) {
            cout << "Lỗi: Hàng đợi đầy!\n";
            return false;
        }
        if (IsEmpty()) front = 0;
        arr[++rear] = x;
        return true;
    }

    int PopQueue() {
        if (IsEmpty()) {
            cout << "Lỗi: Hàng đợi rỗng!\n";
            return -1;
        }
        int value = arr[front++];
        if (front > rear) front = rear = -1;
        return value;
    }

    int PeekQueue() {
        if (IsEmpty()) return -1;
        return arr[front];
    }

    void Clear() { front = rear = -1; }
};


struct Node {
    int data;
    Node* next;
};

class LinkedQueueInt {
private:
    Node* front, *rear;
public:
    void InitQueue() { front = rear = nullptr; }

    bool IsEmpty() { return front == nullptr; }

    void PushQueue(int x) {
        Node* newNode = new Node();
        newNode->data = x;
        newNode->next = nullptr;
        if (IsEmpty()) front = rear = newNode;
        else {
            rear->next = newNode;
            rear = newNode;
        }
    }

    int PopQueue() {
        if (IsEmpty()) return -1;
        int value = front->data;
        Node* temp = front;
        front = front->next;
        delete temp;
        if (front == nullptr) rear = nullptr;
        return value;
    }

    int PeekQueue() {
        if (IsEmpty()) return -1;
        return front->data;
    }

    void Clear() {
        while (!IsEmpty()) PopQueue();
    }

    ~LinkedQueueInt() { Clear(); } // Destructor để tránh memory leak
};



// (b) **Xếp lịch cặp múa nam/nữ**
void DancePairing(queue<string>& males, queue<string>& females) {
    cout << "Danh sách cặp nhảy:\n";
    while (!males.empty() && !females.empty()) {
        cout << males.front() << " - " << females.front() << endl;
        males.pop();
        females.pop();
    }
    if (!males.empty()) {
        cout << "Còn nam chưa có bạn nhảy: ";
        while (!males.empty()) {
            cout << males.front() << " ";
            males.pop();
        }
        cout << endl;
    }
    if (!females.empty()) {
        cout << "Còn nữ chưa có bạn nhảy: ";
        while (!females.empty()) {
            cout << females.front() << " ";
            females.pop();
        }
        cout << endl;
    }
}

// (c) **Thuật toán Radix Sort**
void RadixSort(vector<int>& arr) {
    if (arr.empty()) { // Kiểm tra mảng rỗng
        cout << "Lỗi: Mảng rỗng!\n";
        return;
    }

    int maxVal = *max_element(arr.begin(), arr.end());
    int exp = 1;
    queue<int> buckets[10];

    while (maxVal / exp > 0) {
        for (int num : arr) {
            int digit = (num / exp) % 10;
            buckets[digit].push(num);
        }

        int index = 0;
        for (int i = 0; i < 10; i++) {
            while (!buckets[i].empty()) {
                arr[index++] = buckets[i].front
