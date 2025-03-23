**Hướng Dẫn Sử Dụng Chương Trình Quản Lý Sinh Viên**

### 1. Giới thiệu
Chương trình này cho phép nhập danh sách sinh viên, lưu trữ vào tập tin và sắp xếp dữ liệu theo các tiêu chí khác nhau.

### 2. Chạy chương trình
- Biên dịch mã nguồn bằng trình biên dịch C++ (g++ hoặc Visual Studio).
- Chạy chương trình và nhập số lượng sinh viên (tối thiểu 10 sinh viên).
- Nhập thông tin cho từng sinh viên: mã số, họ và đệm, tên, ngày tháng năm sinh, giới tính, điểm trung bình.

### 3. Các tính năng chính
1. **Lưu danh sách sinh viên vào tập tin**:
   - Dữ liệu được lưu vào file `SINHVIEN.DAT`.
2. **Sắp xếp dữ liệu**:
   - Sắp xếp theo mã số sinh viên (tăng dần) và lưu chỉ mục vào `SVMASO.IDX`.
   - Sắp xếp theo tên sinh viên (A → Z), nếu trùng thì sắp theo họ và đệm, lưu vào `SVTH.IDX`.
   - Sắp xếp theo điểm trung bình (giảm dần) và lưu vào `SVDTB.IDX`.
3. **Hiển thị danh sách sinh viên**:
   - Danh sách sẽ được hiển thị sau mỗi lần sắp xếp.

### 4. Các tập tin được tạo
- `SINHVIEN.DAT`: Lưu danh sách sinh viên.
- `SVMASO.IDX`: Chỉ mục sắp xếp theo mã số.
- `SVTH.IDX`: Chỉ mục sắp xếp theo tên.
- `SVDTB.IDX`: Chỉ mục sắp xếp theo điểm trung bình.

### 5. Lưu ý
- Mã số sinh viên không được trùng lặp.
- Điểm trung bình phải nằm trong khoảng 0.00 đến 10.00.
- Khi nhập sai dữ liệu, cần nhập lại đúng định dạng.

Chúc bạn sử dụng chương trình hiệu quả!

