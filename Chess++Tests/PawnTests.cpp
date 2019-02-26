#include "stdafx.h"
#include "CppUnitTest.h"
#include "../Chess++/Pawn.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace ChessTests
{
	TEST_CLASS(KingTests) {
		TEST_METHOD(TestCalculateLegalMoves)
		{
			Pawn pawn = Pawn(3, 4, WHITE);
			const auto board = Board();

			auto moves = pawn.calculateLegalMoves(board);

			Assert::AreEqual(2, static_cast<int>(moves.size()));
		}
	};
}