#include "Number.h"
#include <iostream>

using namespace std;

Number::Number()
{
    first = 1;
    second = 0,5;
}

Number::~Number()
{}
void Number::SetFirst(int value)
{
    first = (int)value;

}
void Number::SetSecond(double value)
{
    second = (value - (int)value) * 100;
}
Number::Number(int x, double y)
{
    first = x;
    if (x >= 0)
    {
        second = y; 
    }
    else
    {
        cout << "incorrect value entered" << endl;
        second = 0;
    }
}
Number::Number(const Number& copy)
{
    first = copy.first;
    second = copy.second;
}
Number::operator string() const
{
    stringstream ss;
    ss << "first= " << first << "   second= " << second << endl;
    return ss.str();
}
ostream& operator << (ostream& out, const Number& n)
{
    out << (string)n;
    return out;
}
istream& operator >> (istream& in, Number& n)
{
    do {
        cout << "Enter first: "; in >> n.first;
        cout << "Enter second:  "; in >> n.second;
    } while (n.first < 0 || n.second < 0);
    cout << endl;
    return in;
}
double Number::multiply1(double N)
{
    return (first *= N);
}
double Number::multiply2(double N)
{
   return (second *= N);
}
Number& Number::operator = (const Number& n)
{
    first = n.first;
    second = n.second;
    return *this;
}
Number& Number::operator --()
{
        --first;
    return *this;
}
Number& Number::operator ++()
{
    ++first;
    return *this;
}
Number& Number::operator --(int)
{
    Number a(*this);
        first--;
    return a;
}
Number& Number::operator ++(int)
{
    Number a(*this);
    second++;
    return a;
}


