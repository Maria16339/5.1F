#pragma once
#include "Pair.h"

class Rectangle_Public : public Pair
{
public:
	Rectangle_Public();
	Rectangle_Public(double a, double b) throw(logic_error);
	Rectangle_Public(const Rectangle_Public& v);

	Rectangle_Public& operator ++ () throw(out_of_range);
	Rectangle_Public& operator -- () throw(MyDerivedException);
	Rectangle_Public operator ++ (int) throw(MyException);
	Rectangle_Public operator -- (int) throw(MyDerivedException);

	double Dobutok();
	double Square() const;
	double Perimeter() const;
};
