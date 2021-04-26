
#pragma once
#include "Pair.h"

class Rectangle_Private : private Pair
{
public:
	using Pair::GetA;
	using Pair::GetB;

	using Pair::SetA;
	using Pair::SetB;

	using Pair::Pair;

	Rectangle_Private();
	Rectangle_Private(double a, double b) throw (logic_error);
	Rectangle_Private(const Rectangle_Private& s);

	Rectangle_Private& operator = (const Rectangle_Private& s);
	operator string () const;

	Rectangle_Private& operator ++ () throw (out_of_range);
	Rectangle_Private& operator -- () throw (MyDerivedException);
	Rectangle_Private operator ++ (int) throw (MyException);
	Rectangle_Private operator -- (int) throw (MyDerivedException);

	friend ostream& operator << (ostream& out, const Rectangle_Private& s);
	friend istream& operator >> (istream& in, Rectangle_Private& s) throw (logic_error);

	double Dobutok();
	double Square() const;
	double Perimeter() const;
};