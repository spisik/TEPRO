#pragma once

#include "books.h"
class Poet : public Books {
public:
    Poet();
    Poet(const Poet& other);
    ~Poet() override;

    void p() override;

    Poet& operator=(const Poet& other);

    friend std::ofstream& operator<<(std::ofstream& fout, Poet& obj);
    friend std::ifstream& operator>>(std::ifstream& fin, Poet& obj);
    friend std::ostream&  operator<<(std::ostream& out, Poet& obj);
    friend std::istream&  operator>>(std::istream& in, Poet& obj);
};