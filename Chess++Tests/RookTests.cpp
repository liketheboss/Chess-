#include "stdafx.h"
#include "CppUnitTest.h"
#include "../Chess++/Rook.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace ChessTests
{
	TEST_CLASS(RookTests) {
		TEST_METHOD(TestCalculateLegalMoves)
		{
			Rook rook = Rook(3, 4, WHITE);
			const auto board = Board();

			auto moves = rook.calculateLegalMoves(board);

			Assert::AreEqual(14, static_cast<int>(moves.size()));
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