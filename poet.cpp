#include "poet.h"
#include <iostream>

using namespace std;

Poet::Poet() {
    cout << "Вызов конструктора для класса Poet" << endl << endl;
}

Poet::Poet(const Poet& other) {
    fio = other.fio;
    live = other.live;
    works = other.works;
    cout << "Вызов конструктора копирования для класса Poet" << endl << endl;
}

Poet::~Poet() {
    cout << "Вызов деструктора для класса Poet" << endl << endl;
}

void Poet::p() {
    cout << "ФИО: " << fio << endl;
    cout << "Годы жизни: " << live << endl;
    cout << "Произведения: " << works << endl;
}

Poet& Poet::operator=(const Poet& other) {
    if (this != &other) {
        fio = other.fio;
        live = other.live;
        works = other.works;
    }
    return *this;
}

ofstream& operator<<(ofstream& fout, Poet& obj) {
    fout << obj.fio << endl;
    fout << obj.live << endl;
    fout << obj.works << endl;
    return fout;
}

ifstream& operator>>(ifstream& fin, Poet& obj) {
    fin >> obj.fio >> obj.live >> obj.works;
    return fin;
}

ostream& operator<<(ostream& out, Poet& obj) {
    out << "ФИО: " << obj.fio << "\n";
    out << "Годы жизни: " << obj.live << "\n";
    out << "Произведения: " << obj.works << "\n";
    return out;
}

istream& operator>>(istream& in, Poet& obj) {
    cout << "Введите ФИО: ";
    in >> obj.fio;
    cout << "Введите годы жизни: ";
    in >> obj.live;
    cout << "Введите произведения: ";
    in >> obj.works;
    return in;
}