#include "novel.h"
#include <iostream>
#include <string>
using namespace std;

Novel::Novel() {
    setlocale(LC_ALL, "Russian");
    cout << "Вызов конструктора для класса Novel" << endl << endl;
    fio = "";
    live = "";
    works = "";
    bio = "";
}

Novel::Novel(const Novel& other) {
    setlocale(LC_ALL, "Russian");
    cout << "Вызов конструктора копирования для класса Novel" << endl << endl;
    *this = other;
}

Novel::~Novel() {
    setlocale(LC_ALL, "Russian");
}

void Novel::p() {
    cin >> *this;
}

ofstream::ofstream& operator<<(std::ofstream& fout, Novel& obj) {
    fout << obj.fio << endl;
    fout << obj.live << enld;
    fout << obj.works << endl;
    fout << obj.bio << endl;
    return fout; 
}

ifstream& operator>>(ifstream& fin, Novel& obj) {
    getline(fin, obj.fio);
    getline(fin, obj.live);
    getline(fin, obj.works);
    getline(fin, obj.bio);
    return fin;
}

ostream& operator<<(ostream& out, Novel& obj) {
    setlocale(LC_ALL, "Russian");
    out << "ФИО писателя романтиста: " << obj.fio << endl;
    out << "Годы жизни: " << obj.live << endl;
    out << "Произведения: " << obj.works << endl;
    out << "Краткая биография: " << obj.bio << endl;
    return out;
}

istream& operator>>(istream& in, Novel& obj) {
    cout << "Введите данные:" << endl << endl;
    cout << "ФИО писателя романтиста: ";
    getline(in, obj.fio);
    cout << "Годы жизни: ";
    getline(in, obj.live);
    cout << "Произведения: ";
    getline(in, obj.works);
    cout << "Краткая биография: ";
    getline(in, obj.bio);
    return in;
}