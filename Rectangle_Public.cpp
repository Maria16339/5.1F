#include "Rectangle_Public.h"

Rectangle_Public::Rectangle_Public()
	: Pair()
{}

Rectangle_Public::Rectangle_Public(double A, double B) throw(logic_error)
{
	if (!(A > 0 && B  > 0 ))
		throw logic_error("Condition is not met");

	SetA(A); SetB(B); 
}

Rectangle_Public::Rectangle_Public(const Rectangle_Public& v)
	: Pair(v)
{}

Rectangle_Public& Rectangle_Public::operator ++() throw(out_of_range)
{
	this->SetA(this->GetA() + 1);
	if (GetA() > 10 || GetB() > 10 )
		throw out_of_range("Side is bigger than 10");
	return *this;
}

Rectangle_Public& Rectangle_Public::operator --() throw(MyDerivedException)
{
	this->SetB(this->GetB() - 1);
	if (GetB() == 0)
		throw new MyDerivedException();
	return *this;
}

Rectangle_Public Rectangle_Public::operator ++(int) throw (MyException)
{
	Rectangle_Public a(*this);
	this->SetA(this->GetA() + 1);
	if (GetA() > 10 || GetB() > 10 )
		throw MyException("Side is bigger than 10");
	return a;
}

Rectangle_Public Rectangle_Public::operator --(int) throw(MyDerivedException)
{
	Rectangle_Public a(*this);
	this->SetB(this->GetB() - 1);
	if (GetB() == 0)
		throw MyDerivedException();
	return a;
}

double Rectangle_Public::Dobutok()
{
	return GetA() * GetB();
}

double Rectangle_Public::Square() const
{
	double a = GetA();
	double b = GetB();
	double S = 0;
	S = a*b;
	return S;
}
double Rectangle_Public::Perimeter() const
{
	double a = GetA();
	double b = GetB();
	double P = 0;
	P = a *2+ b*2;
	return P;
}