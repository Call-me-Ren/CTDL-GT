# Ý tưởng
1.Dùng vector<int> để lưu mảng.
Nhập giá trị từ bàn phím.
2. Duyệt qua từng phần tử trong mảng:
Số chẵn: Lưu vào danh sách chan.
Số lẻ: Lưu vào danh sách le.
Số 0: Không cần lưu riêng, nhưng ghi nhớ vị trí.
3. Sắp xếp chan theo tăng dần.
Sắp xếp le theo giảm dần.
4. Đưa số đã sắp xếp vào lại mảng gốc
Duyệt lại mảng gốc, thay thế các số chẵn và lẻ bằng số đã sắp xếp theo thứ tự.
Giữ nguyên vị trí của số 0.

#### Test Case 1: Dãy số có cả số chẵn và số lẻ
Input:	6
1 2 3 4 5 6
          	
Output:   
                                                5 2 3 4 1 6

#### Test Case 2: Dãy có số 0 nhưng không thay đổi vị trí số 0
Input:	6
0 7 2 0 4 9
          	
Output:                                                   
0 9 2 0 4 7

#### Test Case 3: Dãy số có số âm
Input:	6
-1 -2 -3 -4 -5 -6
          	
Output:                                                   
-3 -6 -1 -4 -5 -2
