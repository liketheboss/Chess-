#include "stdafx.h"
#include "CppUnitTest.h"
#include "../Chess++/Knight.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace ChessTests
{		
	TEST_CLASS(KnightConstructor)
	{
	public:
		
		TEST_METHOD(TestKnightValid)
		{
			Knight knight(10, 10, WHITE);

			Assert::AreEqual(10, knight.getX(), L"TestKnightValid Failed", LINE_INFO());
		}

		TEST_METHOD(TestKnightInvalid)
		{
			try
			{
				Knight knight(-1, 1, WHITE);
				Assert::Fail;
			}
			catch (const char* ex)
			{
				Assert::AreEqual("Invalid x value", ex);
			}
		}

		TEST_METHOD(TestCalculateLegalMovesMiddle)
		{
			Knight knight(3, 3, WHITE);

			std::set<Location> moveList = knight.calculateLegalMoves(Board());

			Assert::AreEqual(8, (int) moveList.size());
			Assert::IsTrue(moveList.find(Location{ 1, 2 }) != moveList.end());
			Assert::IsTrue(moveList.find(Location{ 1, 4 }) != moveList.end());
			Assert::IsTrue(moveList.find(Location{ 2, 1 }) != moveList.end());
			Assert::IsTrue(moveList.find(Location{ 2, 5 }) != moveList.end());
			Assert::IsTrue(moveList.find(Location{ 4, 1 }) != moveList.end());
			Assert::IsTrue(moveList.find(Location{ 4, 5 }) != moveList.end());
			Assert::IsTrue(moveList.find(Location{ 5, 2 }) != moveList.end());
			Assert::IsTrue(moveList.find(Location{ 5, 4 }) != moveList.end());
		}

		TEST_METHOD(TestCalculateLegalMovesBottom6)
		{

		}

		TEST_METHOD(TestCalculateLegalMovesBottom4)
		{

		}

		TEST_METHOD(TestCalculateLegalMovesTop6)
		{

		}

		TEST_METHOD(TestCalculateLegalMovesTop4)
		{

		}

		TEST_METHOD(TestCalculateLegalMovesRightmost6)
		{

		}

		TEST_METHOD(TestCalculateLegalMovesRightmost4)
		{

		}

		TEST_METHOD(TestCalculateLegalMovesLeftmost6)
		{

		}

		TEST_METHOD(TestCalculateLegalMovesLeftmost4)
		{

		}

		TEST_METHOD(TestCalculateLegalMovesTopLeftCorner)
		{

		}
	};
}