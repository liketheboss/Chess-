#include "stdafx.h"
#include "CppUnitTest.h"
#include "../Chess++/King.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace ChessTests
{
	TEST_CLASS(KingTests) {
		TEST_METHOD(TestCalculateLegalMoves)
		{
			King king = King(3, 4, WHITE);
			const auto board = Board();

			auto moves = king.calculateLegalMoves(board);

			Assert::AreEqual(8, static_cast<int>(moves.size()));
		}
	};
}