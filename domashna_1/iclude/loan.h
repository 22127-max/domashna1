#pragma once
#include <string>
#include <iostream>

class Loan {
    std::string isbn;
    std::string memberId;
    std::string start;
    std::string due;
    bool returned;

public:
    Loan(const std::string& i, const std::string& m, const std::string& s, const std::string& d);

    void markReturned();
    bool isReturned() const;
    bool isOverdue(const std::string& today) const;

    std::string getIsbn() const;
    std::string getMemberId() const;

    void print() const;
};
