# Mảng Nghịch Thế và Tìm Lại Hoán Vị

## 1. Tính mảng nghịch thế B từ hoán vị A

### **Mô tả**
Với một hoán vị \( A = (a_1, a_2, ..., a_N) \) của \( N \) số tự nhiên đầu tiên, ta xác định mảng nghịch thế \( B = (b_1, b_2, ..., b_N) \) với:

\[
b_i = \text{số phần tử } A[j] \text{ (đã đứng trước) lớn hơn } A[i] \quad \forall 1 \leq i \leq N
\]

### **Thuật toán**
1. Duyệt qua từng phần tử \( A[i] \).
2. Kiểm tra tất cả các phần tử \( A[j] \) (đứng trước \( i \)) xem phần tử nào lớn hơn \( A[i] \).
3. Gán số lượng phần tử thoả mãn cho \( B[i] \).
4. Xuất mảng \( B \).

### **Độ phức tạp**
- \( O(N^2) \) với duyệt trực tiếp.
- \( O(N \log N) \) nếu dùng Fenwick Tree hoặc Segment Tree.

---

## 2. Tìm lại hoán vị A từ mảng nghịch thế B

### **Mô tả**
Dựa vào mảng nghịch thế \( B \), tính lại hoán vị \( A \) sao cho \( B \) là mảng nghịch thế của \( A \).

### **Thuật toán**
1. Tạo danh sách số tự nhiên từ \( 1 \) đến \( N \).
2. Duyệt mảng \( B \) từ phải qua trái.
3. Tìm phần tử có thứ tự phù hợp trong danh sách.
4. Gán giá trị vào \( A[i] \), sau đó xóa khỏi danh sách.
5. Xuất mảng \( A \).

### **Độ phức tạp**
- \( O(N^2) \) với dò tìm trong danh sách.
- \( O(N \log N) \) nếu dùng Fenwick Tree hoặc Balanced BST.

---

## **Ví dụ minh hoạ**

### **Tính mảng nghịch thế**
- Cho \( A = (5, 9, 1, 8, 2, 6, 4, 7, 3) \).
- Kết quả \( B = (2, 3, 6, 4, 0, 2, 2, 1, 0) \).

### **Tìm lại hoán vị**
- Cho \( B = (0, 1, 0, 2) \).
- Kết quả \( A = (3, 1, 4, 2) \).

