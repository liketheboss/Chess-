#include "stdafx.h"
#include "CppUnitTest.h"
#include "../Chess++/Piece.h"
#include "../Chess++/Knight.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace ChessTests
{
	TEST_CLASS(PieceTests)
	{
	public:

		TEST_METHOD(TestPiece)
		{
			Knight piece = Knight(4, 5, WHITE);

			Assert::AreEqual(4, piece.getX());
			Assert::AreEqual(5, piece.getY());
			Assert::IsTrue(WHITE == piece.getAlliance());
		}

		TEST_METHOD(TestPieceInvalidLowX)
		{
			try
			{
				Knight piece = Knight(-1, 5, WHITE);
				Assert::Fail();
			}
			catch (const char* message)
			{
				Assert::AreEqual("Attempted to set invalid x position", message);
			}
		}

		TEST_METHOD(TestPieceInvalidHighX)
		{
			try
			{
				Knight piece = Knight(8, 5, WHITE);
				Assert::Fail();
			} catch (const char* message)
			{
				Assert::AreEqual("Attempted to set invalid x position", message);
			}
		}

		TEST_METHOD(TestPieceInvalidLowY)
		{
			try
			{
				Knight piece = Knight(5, -1, WHITE);
				Assert::Fail();
			}
			catch (const char* message)
			{
				Assert::AreEqual("Attempted to set invalid y position", message);
			}
		}

		TEST_METHOD(TestPieceInvalidHighY)
		{
			try
			{
				Knight piece = Knight(5, 8, WHITE);
				Assert::Fail();
			}
			catch (const char* message)
			{
				Assert::AreEqual("Attempted to set invalid y position", message);
			}
		}

		TEST_METHOD(TestMove)
		{
			Knight piece = Knight(4, 5, WHITE);

			piece.move(new Location{ 6, 7 });

			Assert::AreEqual(6, piece.getX());
			Assert::AreEqual(7, piece.getY());
		}

		TEST_METHOD(TestMoveInvalidHighX)
		{
			Knight piece = Knight(4, 5, WHITE);

			try
			{
				piece.move(new Location{ 8, 7 });
				Assert::Fail();
			} catch (const char* message)
			{
				Assert::AreEqual("Attempted to set invalid x position", message);
			}
		}

		TEST_METHOD(TestMoveInvalidLowX)
		{
			Knight piece = Knight(4, 5, WHITE);

			try
			{
				piece.move(new Location{ -1, 7 });
				Assert::Fail();
			}
			catch (const char* message)
			{
				Assert::AreEqual("Attempted to set invalid x position", message);
			}
		}

		TEST_METHOD(TestMoveInvalidHighY)
		{
			Knight piece = Knight(4, 5, WHITE);

			try
			{
				piece.move(new Location{ 4, 8 });
				Assert::Fail();
			}
			catch (const char* message)
			{
				Assert::AreEqual("Attempted to set invalid y position", message);
			}
		}

		TEST_METHOD(TestMoveInvalidLowY)
		{
			Knight piece = Knight(4, 5, WHITE);

			try
			{
				piece.move(new Location{ 4, -1 });
				Assert::Fail();
			}
			catch (const char* message)
			{
				Assert::AreEqual("Attempted to set invalid y position", message);
			}
		}

	};
}