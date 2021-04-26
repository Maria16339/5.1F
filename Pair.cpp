#include "Pair.h"

Pair::Pair()
	: a(0), b(0)
{}

Pair::Pair(double a, double b) throw (out_of_range)
{
	if (!((a > -10 && a < 10) || (b > -10 && b < 10) ))
		throw out_of_range("Numbers must belong to [-10;10]");

	this->a = a;
	this->b = b;
}

Pair::Pair(const Pair& A)
{
	SetA(A.GetA());
	SetB(A.GetB());
}

Pair& Pair::operator =(const Pair& n)
{
	SetA(n.GetA());
	SetB(n.GetB());
	return *this;
}

Pair::operator string() const
{
	stringstream ss;
	ss << "a = " << a << endl;
	ss << "b = " << b << endl;
	return ss.str();
}

ostream& operator << (ostream& out, const Pair& A)
{
	out << string(A);
	return out;
}

istream& operator >> (istream& in, Pair& A) throw(MyException)
{
	double a, b;
	cout << "a = "; in >> a;
	cout << "b = "; in >> b;

	if (!((a > -10 && a < 10) || (b > -10 && b < 10) ))
		throw out_of_range("Numbers must belong to [-10;10]");

	A.SetA(a); A.SetB(b);
	return in;
}