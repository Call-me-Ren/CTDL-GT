#include <iostream>
#include <fstream>
#include <chrono>

using namespace std;
using namespace chrono;

// Hàm đọc dữ liệu từ file
void readDataFromFile(const char* fileName, int arr[], int& n) {
    ifstream inputFile(fileName);
    n = 0;
    while (inputFile >> arr[n]) {
        n++;
    }
    inputFile.close();
}

// Hàm ghi dữ liệu ra file
void writeDataToFile(const char* fileName, int arr[], int n, double elapsedTime) {
    ofstream outputFile(fileName);
    for (int i = 0; i < n; i++) {
        outputFile << arr[i] << " ";
    }
    outputFile << "\nThời gian chạy: " << elapsedTime << " giây\n";
    outputFile.close();
}

// Thuật toán Interchange Sort (Ví dụ minh họa)
void interchangeSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] > arr[j]) {
                swap(arr[i], arr[j]);
            }
        }
    }
}

int main() {
    const char* inputFileName = "input.txt";
    const char* outputFileName = "output.txt";

    int arr[30000]; // Mảng tĩnh lưu dữ liệu
    int n;

    // Đọc dữ liệu từ file
    readDataFromFile(inputFileName, arr, n);

    // Đo thời gian chạy thuật toán
    auto start = high_resolution_clock::now();
    interchangeSort(arr, n);
    auto end = high_resolution_clock::now();

    // Tính thời gian chạy
    double elapsedTime = duration<double>(end - start).count();

    // Ghi kết quả ra file
    writeDataToFile(outputFileName, arr, n, elapsedTime);

    cout << "Hoàn thành!\n";

    return 0;
}
