#pragma once

#include <string>
#include <iostream>

class Books {
protected:
    std::string fio;    
    std::string live;   
    std::string works;  

public:
    Books();
    virtual ~Books();
    virtual void p() = 0;
};