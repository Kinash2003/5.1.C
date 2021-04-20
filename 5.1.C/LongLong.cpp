//LongLong.cpp
#include "LongLong.h"
#include "Bad_exception.h"
using namespace std;

long LongLong::GetX() const { return x; }
long LongLong::GetY() const { return y; }

void LongLong::SetX(long value) { x = value; }
void LongLong::SetY(long value) { y = value; }
LongLong::LongLong() { x = 0, y = 0; }

LongLong::LongLong(long x = 0, long y = 0)
{
	if (x == 1 && y == 1)
		throw invalid_argument(" Invalid_argument ");
	else if (x == 2 && y == 2)
		throw bad_exception();
	else if (x == 3 && y == 3 )
		throw Bad_exception(" Bad_exception ");
	else if (x == 4 && y == 4)
		throw " Exception ";
	this->x = x;
	this->y = y;
}
LongLong::LongLong(const LongLong& A)
{
	x = A.GetX();
	y = A.GetY();
}

string LongLong::toString() const
{
	stringstream sout;

	sout << " Cтаршу частину= " << GetX() << endl;
	sout << " Mолодшу частину = " << GetY() << endl;
	return sout.str();
}
void LongLong::Read()
{
	cout << " Cтаршу частину = "; cin >> x;
	cout << " Mолодшу частину = "; cin >> y;
}
void LongLong::Display()
{
	cout << " Cтарша частина: " << x << endl;
	cout << " Mолодша частина: " << y << endl;
}
