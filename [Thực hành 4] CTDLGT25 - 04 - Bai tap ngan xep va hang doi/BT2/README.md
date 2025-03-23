Họ và tên: Nguyễn Trí Cường
MSSV: 3124411049
Lớp: DCT 124C7

## Main idea
- (a) Cài đặt QueueInt và LinkedQueueInt

``QueueInt dùng mảng (hàng đợi tĩnh), LinkedQueueInt dùng danh sách liên kết (hàng đợi động).
Cả hai đều có các thao tác: InitQueue(), IsEmpty(), IsFull(), PushQueue(), PopQueue(), PeekQueue(), Clear().``

- (b) Xếp lịch cặp múa nam/nữ

``Dùng hai hàng đợi: một cho nam, một cho nữ.
Ghép cặp từng người theo FIFO → In kết quả.
Nếu một nhóm nhiều hơn → Thông báo còn người chưa có cặp.``

-  (c) Cài đặt thuật toán Radix Sort bằng hàng đợi

``Tạo 10 hàng đợi (0-9) để lưu số theo từng chữ số.
Lặp qua từng chữ số (hàng đơn vị, chục, trăm...) → Phân loại số vào hàng đợi.
Lấy số từ hàng đợi ra theo thứ tự và lặp lại cho chữ số tiếp theo.
``
### Test Case 1: Xếp lịch cặp múa nam/nữ  

### **Input 1 (Số lượng nam và nữ bằng nhau)**  
| **Input** | **Output** |
|-----------|----------------------|
| Nam: `A`, `B`, `C` <br> Nữ: `X`, `Y`, `Z` | Danh sách cặp nhảy: <br> A - X <br> B - Y <br> C - Z |

### **Input 2 (Nhiều nam hơn nữ)**  
| **Input** | **Output** |
|-----------|----------------------|
| Nam: `A`, `B`, `C`, `D` <br> Nữ: `X`, `Y`, `Z` | Danh sách cặp nhảy: <br> A - X <br> B - Y <br> C - Z <br> Còn nam chưa có bạn nhảy: D |

### **Input 3 (Nhiều nữ hơn nam)**  
| **Input** | **Output** |
|-----------|----------------------|
| Nam: `A`, `B` <br> Nữ: `X`, `Y`, `Z`, `W` | Danh sách cặp nhảy: <br> A - X <br> B - Y <br> Còn nữ chưa có bạn nhảy: Z W |

---

### Test Case 2: Sắp xếp bằng Radix Sort  

### **Input 1 (Mảng số nguyên dương ngẫu nhiên)**  
| **Input** | **Output** |
|-----------|----------------------|
| `5 3 9 1 6` | Mảng sau khi sắp xếp: `1 3 5 6 9` |

### **Input 2 (Mảng đã sắp xếp sẵn)**  
| **Input** | **Output** |
|-----------|----------------------|
| `1 2 3 4 5` | Mảng sau khi sắp xếp: `1 2 3 4 5` |

### **Input 3 (Mảng chứa số 0 và số lặp lại)**  
| **Input** | **Output** |
|-----------|----------------------|
| `10 5 0 10 5 1` | Mảng sau khi sắp xếp: `0 1 5 5 10 10` |

### **Input 4 (Mảng chỉ có một phần tử)**  
| **Input** | **Output** |
|-----------|----------------------|
| `42` | Mảng sau khi sắp xếp: `42` |

### **Input 5 (Mảng rỗng)**  
| **Input** | **Output** |
|-----------|----------------------|
| ` ` (Mảng rỗng) | Lỗi: Mảng rỗng! |

