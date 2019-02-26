#include "stdafx.h"
#include "CppUnitTest.h"
#include "../Chess++/Queen.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace ChessTests
{
	TEST_CLASS(QueenTests) {
		TEST_METHOD(TestCalculateLegalMoves)
		{
			Queen queen = Queen(3, 4, WHITE);
			const auto board = Board();

			auto moves = queen.calculateLegalMoves(board);

			Assert::AreEqual(27, static_cast<int>(moves.size()));
			Assert::IsTrue(moves.count({ 0, 1 }));
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
			Assert::IsTrue(moves.count({ 0, 4 }));
			Assert::IsTrue(moves.count({ 1, 4 }));
			Assert::IsTrue(moves.count({ 2, 4 }));
			Assert::IsTrue(moves.count({ 0, 4 }));
			Assert::IsTrue(moves.count({ 4, 4 }));
			Assert::IsTrue(moves.count({ 5, 4 }));
			Assert::IsTrue(moves.count({ 6, 4 }));
			Assert::IsTrue(moves.count({ 7, 4 }));
			Assert::IsTrue(moves.count({ 3, 0 }));
			Assert::IsTrue(moves.count({ 3, 1 }));
			Assert::IsTrue(moves.count({ 3, 2 }));
			Assert::IsTrue(moves.count({ 3, 3 }));
			Assert::IsTrue(moves.count({ 3, 5 }));
			Assert::IsTrue(moves.count({ 3, 6 }));
			Assert::IsTrue(moves.count({ 3, 7 }));
		}
	};
}