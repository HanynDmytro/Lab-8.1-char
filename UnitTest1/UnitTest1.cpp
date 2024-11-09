#include "pch.h"
#include "CppUnitTest.h"
#include "../pr8.1 char/Source.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			// Arrange
			char str[] = "abc123abc";
			int expected = 2;

			// Act
			int result = Count(str);

			// Assert
			Assert::AreEqual(expected, result);
		}
	};
}
