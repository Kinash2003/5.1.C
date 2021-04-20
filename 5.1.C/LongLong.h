//LongLong.h
#pragma once

#include <iostream>
#include <sstream>
#include <string>
#include "Bad_exception.h"
#pragma pack(1)

using namespace std;

class LongLong {
	long x, y;
public:

	long GetX() const;
	long GetY() const;


	void SetX(long value);
	void SetY(long value);

	LongLong();
	LongLong(long, long) throw(invalid_argument, bad_exception, Bad_exception, const char*);
	LongLong(const LongLong&);

	string toString() const;
	void Read();
	void Display();
};
