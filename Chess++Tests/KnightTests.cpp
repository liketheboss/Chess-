#include "stdafx.h"
#include "CppUnitTest.h"
#include "../Chess++/Knight.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace ChessTests
{		
	TEST_CLASS(KnightTests)
	{
	public:
		TEST_METHOD(TestCalculateLegalMoves)
		{
			Knight knight = Knight(4, 5, WHITE);
			const auto board = Board();

			auto moves = knight.calculateLegalMoves(board);

			Assert::AreEqual(8, static_cast<int>(moves.size()));
			Assert::IsTrue(moves.count({ 2, 4 }));
			Assert::IsTrue(moves.count({ 2, 6 }));
			Assert::IsTrue(moves.count({ 3, 3 }));
			Assert::IsTrue(moves.count({ 3, 7 }));
			Assert::IsTrue(moves.count({ 5, 3 }));
			Assert::IsTrue(moves.count({ 5, 7 }));
			Assert::IsTrue(moves.count({ 6, 4 }));
			Assert::IsTrue(moves.count({ 6, 6 }));
		}

		TEST_METHOD(TestCalculateLegalMovesRight6)
		{
			Knight knight = Knight(6, 4, WHITE);
			const auto board = Board();

			auto moves = knight.calculateLegalMoves(board);

			Assert::AreEqual(6, static_cast<int>(moves.size()));
			Assert::IsTrue(moves.count({ 4, 3 }));
			Assert::IsTrue(moves.count({ 4, 5 }));
			Assert::IsTrue(moves.count({ 5, 2 }));
			Assert::IsTrue(moves.count({ 5, 6 }));
			Assert::IsTrue(moves.count({ 7, 2 }));
			Assert::IsTrue(moves.count({ 7, 6 }));
		}

		TEST_METHOD(TestCalculateLegalMovesRight4)
		{
			Knight knight = Knight(7, 4, WHITE);
			const auto board = Board();

			auto moves = knight.calculateLegalMoves(board);

			Assert::AreEqual(4, static_cast<int>(moves.size()));
			Assert::IsTrue(moves.count({ 5, 3 }));
			Assert::IsTrue(moves.count({ 5, 5 }));
			Assert::IsTrue(moves.count({ 6, 2 }));
			Assert::IsTrue(moves.count({ 6, 6 }));
		}

		TEST_METHOD(TestCalculateLegalMovesLeft6)
		{
			Knight knight = Knight(1, 4, WHITE);
			const auto board = Board();

			auto moves = knight.calculateLegalMoves(board);

			Assert::AreEqual(6, static_cast<int>(moves.size()));
			Assert::IsTrue(moves.count({ 0, 2 }));
			Assert::IsTrue(moves.count({ 0, 6 }));
			Assert::IsTrue(moves.count({ 2, 2 }));
			Assert::IsTrue(moves.count({ 2, 6 }));
			Assert::IsTrue(moves.count({ 3, 3 }));
			Assert::IsTrue(moves.count({ 3, 5 }));
		}

		TEST_METHOD(TestCalculateLegalMovesLeft4)
		{
			Knight knight = Knight(0, 4, WHITE);
			const auto board = Board();

			auto moves = knight.calculateLegalMoves(board);

			Assert::AreEqual(4, static_cast<int>(moves.size()));
			Assert::IsTrue(moves.count({ 1, 2 }));
			Assert::IsTrue(moves.count({ 1, 6 }));
			Assert::IsTrue(moves.count({ 2, 3 }));
			Assert::IsTrue(moves.count({ 2, 5 }));
		}

		TEST_METHOD(TestCalculateLegalMovesTop6)
		{
			Knight knight = Knight(4, 1, WHITE);
			const auto board = Board();

			auto moves = knight.calculateLegalMoves(board);

			Assert::AreEqual(6, static_cast<int>(moves.size()));
			Assert::IsTrue(moves.count({ 2, 0 }));
			Assert::IsTrue(moves.count({ 2, 2 }));
			Assert::IsTrue(moves.count({ 3, 3 }));
			Assert::IsTrue(moves.count({ 5, 3 }));
			Assert::IsTrue(moves.count({ 6, 0 }));
			Assert::IsTrue(moves.count({ 6, 2 }));
		}

		TEST_METHOD(TestCalculateLegalMovesTop4)
		{
			Knight knight = Knight(4, 0, WHITE);
			const auto board = Board();

			auto moves = knight.calculateLegalMoves(board);

			Assert::AreEqual(4, static_cast<int>(moves.size()));
			Assert::IsTrue(moves.count({ 2, 1 }));
			Assert::IsTrue(moves.count({ 3, 2 }));
			Assert::IsTrue(moves.count({ 5, 2 }));
			Assert::IsTrue(moves.count({ 6, 1 }));
		}

		TEST_METHOD(TestCalculateLegalMovesBottom6)
		{
			Knight knight = Knight(4, 6, WHITE);
			const auto board = Board();

			auto moves = knight.calculateLegalMoves(board);

			Assert::AreEqual(6, static_cast<int>(moves.size()));
			Assert::IsTrue(moves.count({ 2, 5 }));
			Assert::IsTrue(moves.count({ 2, 7 }));
			Assert::IsTrue(moves.count({ 3, 4 }));
			Assert::IsTrue(moves.count({ 5, 4 }));
			Assert::IsTrue(moves.count({ 6, 5 }));
			Assert::IsTrue(moves.count({ 6, 7 }));
		}

		TEST_METHOD(TestCalculateLegalMovesBottom4)
		{
			Knight knight = Knight(4, 7, WHITE);
			const auto board = Board();

			auto moves = knight.calculateLegalMoves(board);

			Assert::AreEqual(4, static_cast<int>(moves.size()));
			Assert::IsTrue(moves.count({ 2, 6 }));
			Assert::IsTrue(moves.count({ 3, 5 }));
			Assert::IsTrue(moves.count({ 5, 5 }));
			Assert::IsTrue(moves.count({ 6, 6 }));
		}
	};
}