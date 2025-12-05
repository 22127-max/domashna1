#pragma once
#include <string>
#include <iostream>

class Author {
    std::string name;
    int birthYear;

public:
    Author();
    Author(const std::string& n, int y);

    std::string getName() const;
    int getBirthYear() const;

    void setName(const std::string& n);
    void setBirthYear(int y);

    void print() const;
};
