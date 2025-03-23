#include <iostream>
#include <stack>
#include <cctype>

using namespace std;

// Họ và tên: Nguyễn Trí Cường
// MSSV: 3124411049
// Lớp: DCT 124C7

// Cấu trúc ngăn xếp dùng mảng để lưu trữ số nguyên
#define MAX 100

class StackInt {
private:
    int arr[MAX]; // Mảng lưu trữ các phần tử
    int top;      // Biến top để theo dõi phần tử đầu ngăn xếp
public:
    StackInt() { top = -1; } // Khởi tạo ngăn xếp rỗng

    bool IsEmpty() { return top == -1; } // Kiểm tra rỗng

    bool IsFull() { return top == MAX - 1; } // Kiểm tra đầy

    void PushStack(int x) {
        if (IsFull()) {
            cout << "Stack đầy!\n";
            return;
        }
        arr[++top] = x; // Thêm phần tử vào stack
    }

    int PopStack() {
        if (IsEmpty()) {
            cout << "Stack rỗng!\n";
            return -1;
        }
        return arr[top--]; // Lấy phần tử trên cùng và giảm top
    }

    int PeekStack() {
        if (IsEmpty()) return -1;
        return arr[top]; // Trả về phần tử trên cùng mà không xóa
    }

    void Clear() { top = -1; } // Xóa toàn bộ stack
};

// Cấu trúc ngăn xếp sử dụng danh sách liên kết
struct Node {
    int data;
    Node* next;
};

class LinkedStackInt {
private:
    Node* top; // Con trỏ đầu ngăn xếp
public:
    LinkedStackInt() { top = nullptr; } // Khởi tạo rỗng

    bool IsEmpty() { return top == nullptr; } // Kiểm tra rỗng

    void PushStack(int x) {
        Node* newNode = new Node();
        newNode->data = x;
        newNode->next = top;
        top = newNode; // Thêm vào đầu danh sách
    }

    int PopStack() {
        if (IsEmpty()) return -1;
        int value = top->data;
        Node* temp = top;
        top = top->next;
        delete temp; // Giải phóng bộ nhớ
        return value;
    }

    int PeekStack() {
        if (IsEmpty()) return -1;
        return top->data;
    }

    void Clear() {
        while (!IsEmpty()) PopStack(); // Xóa toàn bộ danh sách
    }
};


// Cấu trúc ngăn xếp lưu trữ chuỗi ký tự để kiểm tra xâu đối xứng
struct CharNode {
    char data;
    CharNode* next;
};

class StackString {
private:
    CharNode* top;
public:
    StackString() { top = nullptr; }

    bool IsEmpty() { return top == nullptr; }

    void PushStack(char c) {
        CharNode* newNode = new CharNode();
        newNode->data = c;
        newNode->next = top;
        top = newNode;
    }

    char PopStack() {
        if (IsEmpty()) return '\0';
        char value = top->data;
        CharNode* temp = top;
        top = top->next;
        delete temp;
        return value;
    }

    void Clear() {
        while (!IsEmpty()) PopStack();
    }
};



// (b) Đảo số nguyên (dùng StackInt)
void ReverseNumber(int n) {
    StackInt stack;
    while (n > 0) {
        stack.PushStack(n % 10); // Đưa từng chữ số vào stack
        n /= 10;
    }
    cout << "Số đảo ngược: ";
    while (!stack.IsEmpty()) cout << stack.PopStack(); // Lấy ra theo LIFO
    cout << endl;
}

// (c) Kiểm tra xâu đối xứng (dùng StackString)
bool IsPalindrome(string str) {
    StackString stack;
    for (char c : str) stack.PushStack(c);
    for (char c : str) {
        if (stack.PopStack() != c) return false; // Kiểm tra từng ký tự
    }
    return true;
}

// (d) Chuyển số thập phân sang nhị phân (dùng LinkedStackInt)
void DecimalToBinary(int n) {
    LinkedStackInt stack;
    while (n > 0) {
        stack.PushStack(n % 2);
        n /= 2;
    }
    cout << "Dạng nhị phân: ";
    while (!stack.IsEmpty()) cout << stack.PopStack();
    cout << endl;
}

// (e) Chuyển biểu thức trung tố sang hậu tố
int GetPriority(char op) {
    if (op == '+' || op == '-') return 1;
    if (op == '*' || op == '/') return 2;
    return 0;
}

string InfixToPostfix(string infix) {
    stack<char> s;
    string postfix = "";
    for (char c : infix) {
        if (isdigit(c)) {
            postfix += c;
        } else if (c == '(') {
            s.push(c);
        } else if (c == ')') {
            while (!s.empty() && s.top() != '(') {
                postfix += s.top();
                s.pop();
            }
            s.pop();
        } else {
            while (!s.empty() && GetPriority(s.top()) >= GetPriority(c)) {
                postfix += s.top();
                s.pop();
            }
            s.push(c);
        }
    }
    while (!s.empty()) {
        postfix += s.top();
        s.pop();
    }
    return postfix;
}

// Tính giá trị biểu thức hậu tố
int EvaluatePostfix(string postfix) {
    stack<int> s;
    for (char c : postfix) {
        if (isdigit(c)) {
            s.push(c - '0'); // Chuyển ký tự số thành số nguyên
        } else {
            int b = s.top(); s.pop();
            int a = s.top(); s.pop();
            switch (c) {
                case '+': s.push(a + b); break;
                case '-': s.push(a - b); break;
                case '*': s.push(a * b); break;
                case '/': s.push(a / b); break;
            }
        }
    }
    return s.top();
}


int main() {
    int choice;
    do {
        cout << "\n===== MENU =====\n";
        cout << "1. Đảo số\n";
        cout << "2. Kiểm tra xâu đối xứng\n";
        cout << "3. Đổi số thập phân sang nhị phân\n";
        cout << "4. Chuyển đổi và tính giá trị biểu thức hậu tố\n";
        cout << "0. Thoát\n";
        cout << "Lựa chọn của bạn: ";
        cin >> choice;

        if (choice == 1) {
            int n;
            cout << "Nhập số nguyên: ";
            cin >> n;
            ReverseNumber(n);
        } 
        else if (choice == 2) {
            string str;
            cout << "Nhập chuỗi: ";
            cin >> str;
            cout << (IsPalindrome(str) ? "Chuỗi đối xứng\n" : "Chuỗi không đối xứng\n");
        } 
        else if (choice == 3) {
            int n;
            cout << "Nhập số nguyên: ";
            cin >> n;
            DecimalToBinary(n);
        } 
        else if (choice == 4) {
            string infix;
            cout << "Nhập biểu thức trung tố: ";
            cin >> infix;
            string postfix = InfixToPostfix(infix);
            cout << "Dạng hậu tố: " << postfix << endl;
            cout << "Giá trị biểu thức: " << EvaluatePostfix(postfix) << endl;
        } 
        else if (choice != 0) {
            cout << "Lựa chọn không hợp lệ!\n";
        }
    } while (choice != 0);

    cout << "Thoát chương trình.\n";
    return 0;
}
