#pragma once
#include <vector>
#include "Book.h"
#include "Member.h"
#include "Loan.h"
#include <iostream>

class Library {
    std::vector<Book> books;
    std::vector<Member> members;
    std::vector<Loan> loans;

public:
    void addBook(const Book& b);
    void addMember(const Member& m);
    bool loanBook(const std::string& isbn, const std::string& memberId, const std::string& start, const std::string& due);
    bool returnBook(const std::string& isbn, const std::string& memberId);

    void print() const;
};
