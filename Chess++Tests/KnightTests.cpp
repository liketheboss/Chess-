#include "stdafx.h"
#include "CppUnitTest.h"
#include "../Chess++/Knight.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace ChessTests
{		
	TEST_CLASS(KnightTests)
	{
	public:
		
		TEST_METHOD(TestKnightValid)
		{
			Knight knight(10, 10, WHITE);

			Assert::AreEqual(10, knight.getX(), L"TestKnightValid Failed", LINE_INFO());
		}

	};
}