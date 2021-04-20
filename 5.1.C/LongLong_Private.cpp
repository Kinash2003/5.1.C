//LongLong_Private.cpp 
#include "LongLong_Private.h"

using namespace std;

LongLong_Private::LongLong_Private()
	: LongLong(0, 0)
{}
LongLong_Private::LongLong_Private(long x = 0, long y = 0)
	: LongLong(x, y)
{}
LongLong_Private::LongLong_Private(LongLong_Private& A)
	: LongLong(A.GetX(), A.GetY())
{}

LongLong_Private& LongLong_Private::operator = (const LongLong_Private& A)
{
	LongLong(A.GetX(), A.GetY());
	return *this;
}
ostream& operator << (ostream& out, const LongLong_Private& A)
{
	out << string(A);
	return out;
}
istream& operator >> (istream& in, LongLong_Private& A)
{
	double x, y;
	cout << " Cтаршу частину =  "; in >> x;
	cout << " Mолодшу частину = "; in >> y;
	A.SetX(x); A.SetY(y);
	return in;
}
LongLong_Private::operator string() const
{
	stringstream ss;
	ss << " Cтарша частина: " << this->GetX() << endl;
	ss << " Mолодша частина: " << this->GetY() << endl;
	return ss.str();
}
LongLong_Private operator +(LongLong_Private& A, LongLong_Private& B)
{
	LongLong_Private t(A.GetX() + B.GetX(), A.GetY() + B.GetY());
	return t;
}
LongLong_Private operator * (LongLong_Private& A, LongLong_Private& B)
{
	LongLong_Private t(A.GetX() * B.GetX(), A.GetY() * B.GetY());
	return t;
}
bool operator > (LongLong_Private& A, LongLong_Private& B)
{
	return ((A.GetX() > B.GetX()) || (A.GetX() == B.GetX() && A.GetY() > B.GetY()));
}
bool operator < (LongLong_Private& A, LongLong_Private& B)
{
	return ((A.GetX() < B.GetX()) || (A.GetX() == B.GetX() && A.GetY() < B.GetY()));
}
bool operator == (LongLong_Private& A, LongLong_Private& B)
{
	return (A.GetX() == B.GetX() && A.GetY() == B.GetY());
}

LongLong_Private& LongLong_Private::operator ++ ()
{
	this->SetX(this->GetX() + 1);
	return *this;
}
LongLong_Private& LongLong_Private::operator -- ()
{
	this->SetX(this->GetX() - 1);
	return *this;
}
LongLong_Private LongLong_Private::operator ++ (int)
{
	LongLong_Private t(*this);
	this->SetY(this->GetY() + 1);
	return t;
}
LongLong_Private LongLong_Private::operator -- (int)
{
	LongLong_Private t(*this);
	this->SetY(this->GetY() - 1);
	return t;
}
