#pragma once
#include <string>
#include <iostream>

class Member {
    std::string name;
    std::string id;
    int yearJoined;

public:
    Member();
    Member(const std::string& n, const std::string& mid, int y);

    std::string getName() const;
    std::string getId() const;
    int getYearJoined() const;

    void print() const;
};
