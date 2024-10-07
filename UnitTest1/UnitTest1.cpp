#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab05_5/Lab05_5.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int depth = 0;
			int t = f(10, depth);
			double expected = 2;
			double epsilon = 0.0001;   // Точність порівняння
			Assert::AreEqual(expected, t, epsilon);
		}
	};
}
