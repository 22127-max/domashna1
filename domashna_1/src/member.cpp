#include "member.h"
#include <iostream>

using namespace std;

Member::Member() : name("Unknown"), id(""), yearJoined(1900) {}
Member::Member(const string& n, const string& mid, int y)
    : name(n), id(mid), yearJoined(y) 
{
    if(id.empty()) throw "Member id empty";
}

string Member::getName() const { return name; }
string Member::getId() const { return id; }
int Member::getYearJoined() const { return yearJoined; }

void Member::print() const {
    cout << name << " (" << id << ") joined: " << yearJoined;
}
