Nguyễn Trí Cường
MSSV:3124411049

## Ý tưởng
##### Cấu trúc dữ liệu
- ``SinhVien: Lưu thông tin sinh viên (họ tên, địa chỉ, lớp, khóa).
NodeSV: Node của danh sách liên kết, chứa một sinh viên.
ListSV: Quản lý danh sách sinh viên bằng con trỏ head.``
##### Các thao tác chính
- ``Thêm sinh viên vào cuối danh sách.
Xóa sinh viên theo tên hoặc địa chỉ bằng cách cập nhật con trỏ.
Sắp xếp danh sách dùng Selection Sort, kết hợp con trỏ hàm để chọn tiêu chí sắp xếp.
Gộp danh sách bằng cách trỏ phần tử cuối của danh sách 1 đến đầu danh sách 2.``
##### Chương trình chính
- ``Nhập danh sách 10 sinh viên và in ra màn hình.
Xóa sinh viên có tên "Nguyen Van Teo".
Xóa sinh viên có địa chỉ "Nguyen Van Cu".
Thêm sinh viên "Tran Thi Mo - 25 Hong Bang - TT0901 - 2009".
In lại danh sách sau khi cập nhật.``

#### Testcase 1: Nhập và in danh sách
**Input:**
``Nguyen Van A
123 Le Loi
CTK44
2023
Nguyen Van B
456 Nguyen Trai
CTK45
2022``
**Output:**
``Nguyen Van A - 123 Le Loi - CTK44 - 2023  
Nguyen Van B - 456 Nguyen Trai - CTK45 - 2022  ``
#### Testcase 2: Xóa sinh viên theo tên
**Input:**
``objectivec
Nguyen Van A
123 Le Loi
CTK44
2023
Nguyen Van Teo
456 Nguyen Trai
CTK45
2022
Nguyen Van C
789 Ly Tu Trong
CTK46
2021
Hành động: Xóa Nguyen Van Teo``
**Output:**
``objectivec
CopyEdit
Nguyen Van A - 123 Le Loi - CTK44 - 2023  
Nguyen Van C - 789 Ly Tu Trong - CTK46 - 2021  ``
________________________________________
##### Testcase 3: Xóa sinh viên theo địa chỉ
**Input:**
``objectivec
CopyEdit
Nguyen Van A - 123 Le Loi - CTK44 - 2023  
Nguyen Van B - Nguyen Van Cu - CTK45 - 2022  
Nguyen Van C - 789 Ly Tu Trong - CTK46 - 2021  
Hành động: Xóa sinh viên có địa chỉ "Nguyen Van Cu"``
****Output:**
``objectivec
CopyEdit
Nguyen Van A - 123 Le Loi - CTK44 - 2023  
Nguyen Van C - 789 Ly Tu Trong - CTK46 - 2021  ``



