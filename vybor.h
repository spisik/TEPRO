#pragma once
#include <iostream>
#include <string>

using namespace std;

template <typename T>
void vybor_deystviya(T& obj, string line) {
    int choice;
    bool flag = true;
    
    while (flag) {
        cout << "\n--- Меню ---\n";
        cout << "1. Добавить\n";
        cout << "2. Удалить\n";
        cout << "3. Вывести\n";
        cout << "4. Изменить\n";
        cout << "5. Сохранить в файл\n";
        cout << "6. Загрузить из файла\n";
        cout << "0. Назад\n";
        cout << "Выбор: ";
        cin >> choice;
        cin.ignore();
        switch (choice) {
        case 1:
            obj.push();
            break;
        case 2: {
            int num;
            cout << "Введите номер для удаления: ";
            cin >> num;
            obj.pop(num);
            break;
        }
        case 3:
            obj.show();
            break;
        case 4: {
            int num;
            cout << "Введите номер для изменения: ";
            cin >> num;
            obj.edit(num);
            break;
        }
        case 5:
            obj.write(line);
            break;
        case 6:
            obj.read(line);
            break;
        case 0:
            flag = false;
            break;
        default:
            cout << "Неверный ввод\n";
            break;
        }
    }
}