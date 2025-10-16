#include <iostream>
using namespace std;

int main() {
    float canNang, chieuCao, bmi;

    cout << "===== Ung dung tinh BMI =====" << endl;
    cout << "Nhap can nang (kg): ";
    cin >> canNang;

    cout << "Nhap chieu cao (m): ";
    cin >> chieuCao;

    if (chieuCao <= 0 || canNang <= 0) {
        cout << "Gia tri nhap khong hop le!" << endl;
        return 1;
    }

    bmi = canNang / (chieuCao * chieuCao);

    cout << "Chi so BMI cua ban la: " << bmi << endl;

    if (bmi < 18.5)
        cout << "Phan loai: Gay" << endl;
    else if (bmi >= 18.5 && bmi < 24.9)
        cout << "Phan loai: Binh thuong" << endl;
    else if (bmi >= 25 && bmi < 29.9)
        cout << "Phan loai: Thua can" << endl;
    else
        cout << "Phan loai: Beo phi" << endl;

    return 0;
}
