#pragma once

#include "books.h"

class Novel : public Books {
private:
    std::string bio;

public:
    Novel();
    Novel(const Novel& other);
    ~Novel() override;

    void p() override;

    Novel& operator=(const Novel& other);

    friend std::ofstream& operator<<(std::ofstream& fout, Novel& obj);
    friend std::ifstream& operator>>(std::ifstream& fin, Novel& obj);
    friend std::ostream&  operator<<(std::ostream& out, Novel& obj);
    friend std::istream&  operator>>(std::istream& in, Novel& obj);
};