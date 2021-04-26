#pragma once
#include "MyException.h"
#include "MyDerivedException.h"

class Pair
{
private:
	double a, b;

public:
	Pair();
	Pair(double a, double b) throw(out_of_range);
	Pair(const Pair& s);

	double GetA() const { return a; }
	double GetB() const { return b; }

	void SetA(double value) { a = value; }
	void SetB(double value) { b = value; }

	Pair& operator = (const Pair& s);
	operator string () const;

	friend ostream& operator << (ostream& out, const Pair& s);
	friend istream& operator >> (istream& in, Pair& s) throw(MyException);
};