#include "Rectangle_Private.h"
#include "Rectangle_Public.h"

void _unexpected_to_bad()
{
	cerr << "bad_exception" << endl;
	throw;
}

void Call_Bad() throw(bad_exception)
{
	throw bad_exception();
}

int main()
{
	try
	{
		Rectangle_Private A1;
		cin >> A1;
		cout << A1;

		cout << "Size of private class: " << sizeof(A1) << endl;

		double A = 0.0;
		double B = 0.0;

		cout << "Square: " << A1.Square() << endl;
		cout << "Perimeter: " << A1.Perimeter() << endl;
		
		try
		{
			A1--;
		}
		catch (MyDerivedException a)
		{
			cerr << a.What() << endl << endl;
		}
		catch (MyDerivedException* a)
		{
			cerr << a->What() << endl << endl;
		}
	}
	catch (logic_error a)
	{
		cerr << "Exception: " << a.what() << endl;
	}

	Rectangle_Private N1;
	cin >> N1;
	cout << N1;

	try
	{
		N1++;
	}
	catch (MyException& a)
	{
		cerr << "Exception: " << a.What() << endl;
	}
	catch (out_of_range a)
	{
		cerr << "Exception: " << a.what() << endl;
	}

	try
	{
		Rectangle_Public A2(5, 2);

		cout << "Size of public class: " << sizeof(A2) << endl;

		double A = 0.0;
		double B = 0.0;

		cout << "Square: " << A2.Square() << endl;
		cout << "Perimeter: " << A2.Perimeter() << endl;
		
		try
		{
			A2--;
		}
		catch (MyDerivedException a)
		{
			cerr << a.What() << endl << endl;
		}
		catch (MyDerivedException* a)
		{
			cerr << a->What() << endl << endl;
		}
	}
	catch (logic_error a)
	{
		cerr << "Exception: " << a.what() << endl;
	}

	Rectangle_Private N2(4, 2);

	try
	{
		N2++;
	}
	catch (MyException& a)
	{
		cerr << "Exception: " << a.What() << endl;
	}
	catch (out_of_range a)
	{
		cerr << "Exception: " << a.what() << endl;
	}

	try
	{
		Call_Bad();
	}
	catch (bad_exception)
	{
		cerr << "catch (bad_exception)" << endl;
	}
	system("pause");
}