#include "fantastic.h"
#include <iostream>

using namespace std;

Fantastic::Fantastic() {
    cout << "Вызов конструктора для класса Fantastic" << endl << endl;
}

Fantastic::Fantastic(const Fantastic& other) {
    fio = other.fio;
    live = other.live;
    works = other.works;
    films = other.films;
    cout << "Вызов конструктора копирования для класса Fantastic" << endl << endl;
}

Fantastic::~Fantastic() {
    cout << "Вызов деструктора для класса Fantastic" << endl << endl;
}

void Fantastic::p() {
    cout << "ФИО: " << fio << endl;
    cout << "Годы жизни: " << live << endl;
    cout << "Произведения: " << works << endl;
    cout << "Экранизации: " << films << endl;
}

Fantastic& Fantastic::operator=(const Fantastic& other) {
    if (this != &other) {
        fio = other.fio;
        live = other.live;
        works = other.works;
        films = other.films;
    }
    return *this;
}

ofstream& operator<<(ofstream& fout, Fantastic& obj) {
    fout << obj.fio << endl;
    fout << obj.live << endl;
    fout << obj.works << endl;
    fout << obj.films << endl;
    return fout;
}

ifstream& operator>>(ifstream& fin, Fantastic& obj) {
    fin >> obj.fio >> obj.live >> obj.works >> obj.films;
    return fin;
}

ostream& operator<<(ostream& out, Fantastic& obj) {
    out << "ФИО: " << obj.fio << "\n";
    out << "Годы жизни: " << obj.live << "\n";
    out << "Произведения: " << obj.works << "\n";
    out << "Экранизации: " << obj.films << "\n";
    return out;
}

istream& operator>>(istream& in, Fantastic& obj) {
    cout << "Введите ФИО: ";
    getline(in, obj.fio);
    
    cout << "Введите годы жизни: ";
    getline(in, obj.live);
    
    cout << "Введите произведения: ";
    getline(in, obj.works);
    
    cout << "Введите экранизации: ";
    getline(in, obj.films);
    
    return in;
}