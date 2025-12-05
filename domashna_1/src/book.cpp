#include "Book.h"
#include <iostream>

using namespace std;

int Book::totalBooks = 0;

Book::Book() : title(""), author(), year(1900), price(0), isbn("") { totalBooks++; }
Book::Book(const string& t, const Author& a, int y, double p, const string& i)
    : title(t), author(a), year(y), price(p), isbn(i) 
{
    setYear(y);
    setPrice(p);
    totalBooks++;
}

string Book::getTitle() const { return title; }
Author Book::getAuthor() const { return author; }
int Book::getYear() const { return year; }
double Book::getPrice() const { return price; }
string Book::getIsbn() const { return isbn; }

void Book::setTitle(const string& t) { title = t; }
void Book::setAuthor(const Author& a) { author = a; }
void Book::setYear(int y) { if(y<1450 || y>2025) throw "Wrong year"; year=y; }
void Book::setPrice(double p) { if(p<0) throw "Negative price"; price=p; }
void Book::setIsbn(const string& i) { isbn = i; }

void Book::print() const {
    cout << title << " by ";
    author.print();
    cout << " (" << year << ") $" << price << " ISBN:" << isbn;
}

int Book::getTotalBooks() { return totalBooks; }
