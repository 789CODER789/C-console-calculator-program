#include <iostream>
#include <vector>
#include <string>
using namespace std;

struct Student{
    int id;
    string ism;
    int yosh;
    string guruh;
};


int main(){
    int tanlov;
    cout << "========== Talabalar boshqaruv tizimi ==========\n";
    cout << "1. Yangi talabani qo'shish\n2. Talabalar ro'yxatini ko'rish\n3. Talabani qidirish\n4. Talabani o'chirish\n5. Chiqish\n";
    cout << "Tanlovingizni kiriting: ";
    cin >> tanlov;

    switch (tanlov)
    {
    case 1:
        cout << "1. Yangi talabani qo'shish";
        break;
    case 2:
        cout << "2. Talabalar ro'yxatini ko'rish";
        break;
    case 3:
        cout << "3. Talabani qidirish";
        break;
    case 4:
        cout << "4. Talabani o'chirish";
        break;
    case 5:
        cout << "5. Chiqish";
        break;
    default:
        cout << "Xatolik yuz berdi"; 
        break;
    }


    return 0;
}