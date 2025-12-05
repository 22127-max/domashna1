#pragma once
#include <string>
#include "Author.h"
#include <iostream>

class Book {
    std::string title;
    Author author;
    int year;
    double price;
    std::string isbn;
    static int totalBooks;

public:
    Book();
    Book(const std::string& t, const Author& a, int y, double p, const std::string& i);

    std::string getTitle() const;
    Author getAuthor() const;
    int getYear() const;
    double getPrice() const;
    std::string getIsbn() const;

    void setTitle(const std::string& t);
    void setAuthor(const Author& a);
    void setYear(int y);
    void setPrice(double p);
    void setIsbn(const std::string& i);

    void print() const;
    static int getTotalBooks();
};
