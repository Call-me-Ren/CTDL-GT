Họ và tên: Nguyễn Trí Cường
MSSV: 3124411049
Lớp: DCT124C7

## Main idea
- **Cấu trúc dữ liệu**
_``Dùng danh sách liên kết đơn để lưu trữ các số nguyên.
 Mỗi phần tử trong danh sách là một node gồm hai phần:
 Giá trị số nguyên (data)
Con trỏ (next) trỏ đến phần tử tiếp theo``
- **Các thao tác trên danh sách liên kết**
``Thêm phần tử (them):
Nếu danh sách rỗng, phần tử mới là head.
Nếu không, duyệt đến phần tử cuối cùng rồi thêm phần tử mới vào.``
- **Xóa phần tử (xoa):**
``Xóa tất cả các phần tử có giá trị bằng k.
Nếu head có giá trị k, xóa head.
Duyệt danh sách, kiểm tra các phần tử tiếp theo, nếu có giá trị k thì bỏ qua (cập nhật con trỏ).``
- **In danh sách (inDanhSach):**
``Duyệt danh sách từ đầu đến cuối, in ra giá trị từng phần tử.``

#### Testcase 1: Nhập danh sách và xóa một số có trong danh sách
**Input:**
``10 5 7 5 8 3 5 6 1 5
5``
**Output:**
``10 5 7 5 8 3 5 6 1 5
10 7 8 3 6 1``
________________________________________
#### Testcase 2: Xóa một số không có trong danh sách
**Input:**
``1 2 3 4 5 6 7 8 9 10
11``
****Output:**
``1 2 3 4 5 6 7 8 9 10
1 2 3 4 5 6 7 8 9 10``
________________________________________
#### Testcase 3: Xóa tất cả các số giống nhau
**Input:**
``2 2 2 2 2 2 2 2 2 2
2``
**Output:**
``2 2 2 2 2 2 2 2 2 2``
