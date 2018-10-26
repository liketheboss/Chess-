#include "stdafx.h"
#include "CppUnitTest.h"
#include "../Chess++/Bishop.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace ChessTests
{
	TEST_CLASS(BishopTests) {
		TEST_METHOD(TestCalculateLegalMoves)
		{
			Bishop bishop = Bishop(3, 4, WHITE);
			const auto board = Board();

			auto moves = bishop.calculateLegalMoves(board);

			Assert::AreEqual(13, static_cast<int>(moves.size()));
			Assert::IsTrue(moves.count(Location{ 0, 1 }));
			Assert::IsTrue(moves.count({ 0, 7 }));
			Assert::IsTrue(moves.count({ 1, 2 }));
			Assert::IsTrue(moves.count({ 1, 6 }));
			Assert::IsTrue(moves.count({ 2, 3 }));
			Assert::IsTrue(moves.count({ 2, 5 }));
			Assert::IsTrue(moves.count({ 4, 5 }));
			Assert::IsTrue(moves.count({ 4, 3 }));
			Assert::IsTrue(moves.count({ 5, 6 }));
			Assert::IsTrue(moves.count({ 5, 2 }));
			Assert::IsTrue(moves.count({ 6, 7 }));
			Assert::IsTrue(moves.count({ 6, 1 }));
			Assert::IsTrue(moves.count({ 7, 0 }));
		}
	};
}