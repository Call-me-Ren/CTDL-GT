// Họ và tên: Nguyễn Trí Cường
// MSSV: 3124411049
// Lớp: DCT 124C7

## Main idea
- (a) Cài đặt StackInt và LinkedStackInt

``StackInt dùng mảng, LinkedStackInt dùng danh sách liên kết.
Cả hai đều có các thao tác: InitStack(), IsEmpty(), IsFull(), PushStack(), PopStack(), PeekStack(), Clear().``

- (b) Đảo số bằng Stack

``Push từng chữ số vào stack → Pop từng chữ số ra để tạo số đảo ngược.``

- (c) Kiểm tra xâu đối xứng

``Push nửa đầu xâu vào stack → Pop từng ký tự và so sánh với nửa còn lại.``

- (d) Chuyển số thập phân sang nhị phân

``Push phần dư khi chia cho 2 vào stack → Pop để lấy số nhị phân.``

- (e) Chuyển biểu thức sang hậu tố & tính giá trị

``Dùng stack để xử lý toán tử theo thứ tự ưu tiên khi chuyển sang hậu tố.
Dùng stack để tính giá trị từ biểu thức hậu tố.``

### Test Case 1: Đảo số  

| **Input** | **Output** |
|-----------|----------------------|
| `1` <br> `12345` <br> `0` | Số đảo ngược: 54321 <br> Thoát chương trình. |

---

### Test Case 2: Kiểm tra xâu đối xứng  

### **Input 1 (Chuỗi đối xứng)**  
| **Input** | **Output** |
|-----------|----------------------|
| `2` <br> `madam` <br> `0` | Chuỗi đối xứng <br> Thoát chương trình. |

### **Input 2 (Chuỗi không đối xứng)**  
| **Input** | **Output** |
|-----------|----------------------|
| `2` <br> `hello` <br> `0` | Chuỗi không đối xứng <br> Thoát chương trình. |

---

### Test Case 3: Chuyển số thập phân sang nhị phân  

| **Input** | **Output** |
|-----------|----------------------|
| `3` <br> `13` <br> `0` | Dạng nhị phân: 1101 <br> Thoát chương trình. |

---

### Test Case 4: Chuyển đổi và tính giá trị biểu thức hậu tố  

### **Input 1 (Biểu thức hợp lệ)**  
| **Input** | **Output** |
|-----------|----------------------|
| `4` <br> `3+5*2` <br> `0` | Dạng hậu tố: 352*+ <br> Giá trị biểu thức: 13 <br> Thoát chương trình. |

### **Input 2 (Biểu thức có dấu ngoặc)**  
| **Input** | **Output** |
|-----------|----------------------|
| `4` <br> `(3+5)*2` <br> `0` | Dạng hậu tố: 35+2* <br> Giá trị biểu thức: 16 <br> Thoát chương trình. |

---

### Test Case 5: Nhập sai lựa chọn trong Menu  

| **Input** | **Output** |
|-----------|----------------------|
| `7` <br> `0` | Lựa chọn không hợp lệ! <br> Thoát chương trình. |



