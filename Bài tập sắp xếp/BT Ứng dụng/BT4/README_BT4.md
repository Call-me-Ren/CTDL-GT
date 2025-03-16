# Ý tưởng
1.	Dùng vòng lặp lồng nhau để nhập dữ liệu từ người dùng vào ma trận kích thước        m × n.
2.	 Xây dựng hàm kiểm tra số nguyên tố
Một số n là nguyên tố nếu n ≥ 2 và không chia hết cho số nào từ 2 đến sqrt(n).
3.	 Tìm số nguyên tố lớn nhất trong ma trận
Duyệt từng phần tử trong ma trận.
Nếu phần tử đó là số nguyên tố và lớn hơn số nguyên tố lớn nhất hiện tại, cập nhật giá trị.
Nếu không tìm thấy số nguyên tố nào, trả về -1 (hoặc thông báo không có số nguyên tố).
4.	 Tìm các dòng chứa ít nhất một số nguyên tố
Duyệt từng dòng trong ma trận, kiểm tra xem dòng đó có chứa số nguyên tố không.
Nếu có, lưu lại chỉ số dòng đó vào danh sách kết quả.
5.	 Tìm các dòng chỉ chứa toàn số nguyên tố
Duyệt từng dòng trong ma trận, kiểm tra tất cả phần tử trong dòng đó.
Nếu tất cả các phần tử trong dòng là số nguyên tố, lưu lại chỉ số dòng đó vào danh sách kết quả.
6.	 Xuất kết quả

#### Testcase kiểm tra số nguyên tố hay không.
| Testcase | Input (n) | Output |
|----------|-----------|--------|
| TC1      | 2         | YES    |
| TC2      | 3         | YES    |
| TC3      | 4         | NO     |
| TC4      | 17        | YES    |
| TC5      | 20        | NO     |
| TC6      | 1         | NO     |
| TC7      | -5        | NO     |
| TC8      | 999983    | YES    |
| TC9      | 1000000   | NO     |