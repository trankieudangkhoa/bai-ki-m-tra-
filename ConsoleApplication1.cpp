// ConsoleApplication1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <iostream>
#include <string>
#include <algorithm>

using namespace std;


// Phần 1: Khai báo và khởi tạo mảng
string danhsachMSSV[5] = { "", "2301CT1234", "2302CT3456", "2305CT3999", "2304CT0002" };

int main() {
    // Phần 2: Nhập MSSV từ bàn phím
    cout << "Nhap MSSV cua ban: ";
    cin >> danhsachMSSV[0];

    // Phần 3: In mảng ra màn hình
    cout << "Danh sach MSSV: ";
    for (int i = 0; i < 5; i++) {
       cout << danhsachMSSV[i] << " ";
    }
   cout << endl;

    // Phần 4: Sắp xếp mảng
    string sortedMSSV[5];
    copy(danhsachMSSV, danhsachMSSV + 5, sortedMSSV);
    sort(sortedMSSV, sortedMSSV + 5);

    cout << "Danh sach MSSV sau khi sap xep: ";
    for (int i = 0; i < 5; i++) {
        cout << sortedMSSV[i] << " ";
    }
    cout << endl;

    // Phần 5: Tìm địa chỉ của phần tử chứa MSSV lớn nhất
    string* ptrArrayMSSV = max_element(danhsachMSSV, danhsachMSSV + 5);
    cout << "Dia chi cua phan tu chua MSSV lon nhat: " << ptrArrayMSSV << endl;
    cout << "Phan tu chua MSSV lon nhat: " << *ptrArrayMSSV << endl;

    return 0;
}


// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
