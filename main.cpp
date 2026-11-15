#include <iostream>
#include "keeper.h"
#include "books.h"
#include "novel.h"
#include "poet.h"
#include "fantastic.h"
#include "vybor.h"

using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");

    Keeper<Novel> novel;
    Keeper<Poet> poet;
    Keeper<Fantastic> fantastic;

    int button;
    bool flag = true;

    while (flag) {
        cout << "1. Романтист\n";
        cout << "2. Поэт\n";
        cout << "3. Фантаст\n";
        cout << "0. Выход\n";
        cout << "Выбор: ";
        cin >> button;
        cin.ignore()
        switch (button) {
        case 1:
            vybor_deystviya(novel, "novel.txt");
            break;
        case 2:
            vybor_deystviya(poet, "poet.txt");
            break;
        case 3:
            vybor_deystviya(fantastic, "fantastic.txt");
            break;
        case 0:
            flag = false;
            break;
        default:
            cout << "Неверный ввод\n";
            break;
        }
    }
    return 0;
}