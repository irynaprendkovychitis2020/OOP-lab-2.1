#pragma once
#include <iostream>
#include <sstream>

using namespace std;

class Number
{
	int first;
	double second;
public:
	Number();
	Number(int x, double y);
	Number(const Number& copy);
	~Number();

	int GetFirst() const { return first; }
	unsigned int GetSecond() const { return second; }
	void SetFirst(int value);
	void SetSecond(double value);

	operator string() const;
	friend ostream& operator << (ostream& out, const Number& n);
	friend istream& operator >> (istream& in, Number& n);

	Number& operator = (const Number& n);
	Number& operator --();
	Number& operator ++();
	Number& operator --(int);
	Number& operator ++(int);

	double multiply1(double N);
	double multiply2(double N);
	
};

