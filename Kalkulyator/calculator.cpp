#include <iostream>

using namespace std;

void chiqarish(double natija){
    cout << "Javob : " << natija << '\n';
}
// void err(){
//     if(cin.fail()){
//         cout << "Xato. Iltimos, son kiriting!\n ";
//     }
// }
int main(){
    
    char amal;
    double num1, num2, natija;

    cout << "**********Kalkulyator***********";
    
    cout << "\nAmal kiriting ( + , - , * ,: ): "; 
    cin >> amal;
    // if(cin.fail()){
    //     cout << "Xato: Iltimos, Amal kiriting ( + , - , * ,: ) kiriting!\n";
    //     return 1;
    // }

    cout << "1 - raqm : ";
    cin >> num1;
    if(cin.fail()){
        cout << "Xato. Iltimos, son kiriting!\n ";
        return 1;
    }
    cout << "2 - raqm : ";
    cin >> num2;
    if(cin.fail()){
        cout << "Xato. Iltimos, son kiriting!\n ";
        return 1;
    }

    switch (amal){
    case '+':
        natija = num1 + num2;
        chiqarish(natija);
        break;
    case '-':
        natija = num1 - num2;
        chiqarish(natija);
        break;
    case '*':
        natija = num1 * num2;
        chiqarish(natija);
        break;
    case ':':
        if (num2 != 0) { 
                natija = num1 / num2;
                chiqarish(natija);
            } else {
                cout << "Xato: Nolga bo'lish mumkin emas!" << '\n';
            }
            break;
    default:
        cout << "Xato: Amal noto'g'ri! Iltimos, + , - , * , : kiritishingiz kerak. \n";
        break;
    }

    cout << "********************************";
    cout << '\n';
    cout << "Dastur tugadi";

    return 0;
}