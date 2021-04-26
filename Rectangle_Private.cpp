#include "Rectangle_Private.h"

Rectangle_Private::Rectangle_Private()
	: Pair()
{}

Rectangle_Private::Rectangle_Private(double A, double B) throw (logic_error)
{
	if (!(A > 0 && B  > 0 ))
		throw logic_error("Condition is not met");

	SetA(A); SetB(B); 
}

Rectangle_Private::Rectangle_Private(const Rectangle_Private& v)
	: Pair(v)
{}

Rectangle_Private& Rectangle_Private::operator = (const Rectangle_Private& n)
{
	double a = n.GetA();
	double b = n.GetB();
	return *this;
}

Rectangle_Private::operator string () const
{
	stringstream ss;
	ss << endl;
	ss << "a = " << GetA() << endl;
	ss << "b = " << GetB() << endl;
	return ss.str();
}

Rectangle_Private& Rectangle_Private::operator ++() throw(out_of_range)
{
	this->SetA(this->GetA() + 1);
	if (GetA() > 10)
		throw out_of_range("Side is bigger than 10");
	return *this;
}

Rectangle_Private& Rectangle_Private::operator --() throw(MyDerivedException)
{
	this->SetB(this->GetB() - 1);
	if (GetB() <= 0)
		throw new MyDerivedException();
	return *this;
}

Rectangle_Private Rectangle_Private::operator ++(int) throw (MyException)
{
	Rectangle_Private a(*this);
	this->SetA(this->GetA() + 1);
	if (GetA() > 10)
		throw MyException("Side is bigger than 10");
	return a;
}

Rectangle_Private Rectangle_Private::operator --(int) throw(MyDerivedException)
{
	Rectangle_Private a(*this);
	this->SetB(this->GetB() - 1);
	if (GetB() <= 0)
		throw MyDerivedException();
	return a;
}

ostream& operator <<(ostream& out, const Rectangle_Private& s)
{
	out << (string)s;
	return out;
}

istream& operator >>(istream& in, Rectangle_Private& s) throw (logic_error)
{
	double a, b;
	cout << "a = "; in >> a;
	cout << "b = "; in >> b;

	if (!(a > 0 && b  > 0 ))
		throw logic_error("Condition is not met");

	s.SetA(a); s.SetB(b); 
}

double Rectangle_Private::Dobutok()
{
	return GetA()* GetB();
}

double Rectangle_Private::Square() const
{
	double a = GetA();
	double b = GetB();
	double S = 0;;
	S = a*b;
	return S;
}

double Rectangle_Private::Perimeter() const
{
	double a = GetA();
	double b = GetB();
	double P = 0;;
	P = a *2+ b*2;
	return P;
}