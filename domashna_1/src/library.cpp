#include "library.h"
#include <algorithm>
#include <iostream>

using namespace std;

void Library::addBook(const Book& b) { books.push_back(b); }
void Library::addMember(const Member& m) { members.push_back(m); }

bool Library::loanBook(const string& isbn, const string& memberId, const string& start, const string& due) {
    auto it = find_if(loans.begin(), loans.end(), [&](Loan l){ return l.getIsbn()==isbn && !l.isReturned(); });
    if(it != loans.end()) return false;
    loans.emplace_back(isbn, memberId, start, due);
    return true;
}

bool Library::returnBook(const string& isbn, const string& memberId) {
    for(auto &l: loans) {
        if(l.getIsbn()==isbn && l.getMemberId()==memberId && !l.isReturned()) {
            l.markReturned();
            return true;
        }
    }
    return false;
}

void Library::print() const {
    cout << "Books in library:\n";
    for(auto b: books) { b.print(); cout << "\n"; }
    cout << "Members:\n";
    for(auto m: members) { m.print(); cout << "\n"; }
    cout << "Loans:\n";
    for(auto l: loans) { l.print(); cout << "\n"; }
}
