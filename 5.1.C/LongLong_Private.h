//LongLong_Private.h 
#pragma once
#include <iostream>
#include "LongLong.h"

#pragma pack(1)

using namespace std;
class LongLong_Private : private LongLong {

public:
	using LongLong::GetX;
	using LongLong::GetY;

	using LongLong::SetX;
	using LongLong::SetY;

	using LongLong::LongLong;

	LongLong_Private();
	LongLong_Private(long, long);
	LongLong_Private(LongLong_Private&);

	LongLong_Private& operator = (const LongLong_Private&);
	friend ostream& operator << (ostream&, const LongLong_Private&);
	friend istream& operator >> (istream&, LongLong_Private&);
	operator string() const;

	friend LongLong_Private operator + (LongLong_Private&, LongLong_Private&);
	friend LongLong_Private operator * (LongLong_Private&, LongLong_Private&);

	friend bool operator > (LongLong_Private&, LongLong_Private&);
	friend bool operator < (LongLong_Private&, LongLong_Private&);
	friend bool operator == (LongLong_Private&, LongLong_Private&);

	LongLong_Private& operator ++ ();
	LongLong_Private& operator -- ();
	LongLong_Private operator ++ (int);
	LongLong_Private operator -- (int);

};

