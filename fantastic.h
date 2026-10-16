#pragma once

#include "books.h"

class Fantastic : public Books {
private:
    std::string films;

public:
    Fantastic();
    Fantastic(const Fantastic& other);
    ~Fantastic() override;

    void p() override;

    Fantastic& operator=(const Fantastic& other);

    friend std::ofstream& operator<<(std::ofstream& fout, Fantastic& obj);
    friend std::ifstream& operator>>(std::ifstream& fin, Fantastic& obj);
    friend std::ostream&  operator<<(std::ostream& out, Fantastic& obj);
    friend std::istream&  operator>>(std::istream& in, Fantastic& obj);
};