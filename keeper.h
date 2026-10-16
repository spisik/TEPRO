#pragma once

#include <string>

template <class T>
class Keeper {
private:
    T*  ptr;
    int size;

public:
    Keeper();
    ~Keeper();

    void push();              
    void pop(int num);        
    void show();             
    void edit(int num);       
    void write(std::string);  
    void read(std::string);   
};