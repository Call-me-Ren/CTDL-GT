# Ý tưởng
Duyệt qua mảng từ trái sang phải, sử dụng hai con trỏ:
left trỏ vào vị trí đầu tiên của mảng.
right trỏ vào vị trí cuối cùng của mảng.
Đổi chỗ phần tử để đưa số chẵn về đầu, số lẻ về cuối bằng cách:
Nếu arr[left] là số chẵn, tăng left lên.
Nếu arr[right] là số lẻ, giảm right xuống.
Nếu arr[left] là số lẻ và arr[right] là số chẵn, đổi chỗ hai phần tử đó.
Dừng khi left và right gặp nhau.

#### Testcase 1: Dãy số có cả số chẵn và số lẻ
Input:	 6
2 3 4 5 6
          	
Output:                                                   
2 6 4 3 5 1


#### Test Case 2: Dãy số có số âm

Input:	 6
-1 -2 -3 -4 -5 -6
          	
Output:                                                   
-2 -6 -4 -3 -5 -1
