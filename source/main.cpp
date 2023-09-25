#include <iostream>
#include <array>
using namespace std;

/**
 * Hàm in mảng arr có kích thước N ra standard output
 * @param N - Kích thước mảng arr
 * @param arr - Con trỏ mảng số nguyên 
*/
void printArray(int N, int* arr){    
    for(int i = 0; i < N; i++){
        cout << arr[i] << " ";
    }
    cout << "\n";
}

/**
 * Hàm cài đặt thuật toán bubble sort. 
 * Xem chi tiết tại: https://www.geeksforgeeks.org/bubble-sort
*/
void bubbleSort(){
    int a[] = { 100, 34, 29, 1, 20, 5 };
    int aSize = end(a) - begin(a);
    cout << "Mang A: ";                                                     // <--- log
    printArray(aSize, a);                                                   // <--- log
    for(int i = aSize - 1; i > 0; i--){
        cout << "  - Bước " << aSize - i;                                   // <--- log
        cout << "\t A lúc bắt đầu xét: ";                            // <--- log
        printArray(aSize, a);                                               // <--- log
        for(int j = 1; j <= i; j++){
            cout << "     - Vòng con j = " << j << ", a[j] = " << a[j];     // <--- log
            cout << ",\ta[j-1] = " << a[j-1];                               // <--- log
            if (a[j-1] > a[j]){
                cout << " => Đổi chỗ ";                                     // <--- log
                int c = a[j-1];
                a[j-1] = a[j];
                a[j] = c;                
            }            
            cout << " \t=> A: ";                                            // <--- log
            printArray(aSize, a);                                           // <--- log
        }                
    }
    cout << "\nSau SX: ";                                                   // <--- log
    printArray(aSize, a);                                                   // <--- log
}

/**
 * Hàm main, điểm vào chính của chương trình
 * @return 0 - thành công, các giá trị lỗi sẽ khác 0
*/
int main(){    
    cout << "Cài đặt bubble sort\n";                                        // <--- log
    bubbleSort();
    cout << "--------------END--------------------\n\n";                    // <--- log
    return 0;
}