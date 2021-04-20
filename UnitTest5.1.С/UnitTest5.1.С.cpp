#include "pch.h"
#include "CppUnitTest.h"
#include "../5.1.C/LongLong.h"
#include "../5.1.C/LongLong.cpp"
#include "../5.1.C/LongLong_Public.h"
#include "../5.1.C/LongLong_Public.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest51С
{
	TEST_CLASS(UnitTest51С)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			LongLong_Public A(5, 5), B(8, 8);
			Assert::AreEqual(A < B, true);


		}
	};
}
