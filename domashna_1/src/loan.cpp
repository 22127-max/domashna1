#include "loan.h"
#include <iostream>

using namespace std;

Loan::Loan(const string& i, const string& m, const string& s, const string& d)
    : isbn(i), memberId(m), start(s), due(d), returned(false)
{
    if(d < s) throw "Due before start";
}

void Loan::markReturned() { returned = true; }
bool Loan::isReturned() const { return returned; }
bool Loan::isOverdue(const string& today) const { return !returned && today > due; }

string Loan::getIsbn() const { return isbn; }
string Loan::getMemberId() const { return memberId; }

void Loan::print() const {
    cout << isbn << " -> " << memberId << " from " << start << " to " << due;
    if(returned) cout << " (returned)";
    else cout << " (active)";
}
