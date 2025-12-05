#include "Author.h"
#include <iostream>

using namespace std;

Author::Author() : name("Unknown"), birthYear(1900) {}
Author::Author(const string& n, int y) : name(n) { setBirthYear(y); }

string Author::getName() const { return name; }
int Author::getBirthYear() const { return birthYear; }

void Author::setName(const string& n) { name = n; }
void Author::setBirthYear(int y) { 
    if (y < 1850 || y > 2025) throw "Wrong year"; 
    birthYear = y; 
}

void Author::print() const {
    cout << name << " (" << birthYear << ")";
}
