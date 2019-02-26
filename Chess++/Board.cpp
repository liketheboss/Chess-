#include "Board.h"
#include "BaseBitboards.h"


Board::Board()
{
	this->pieceBoard[All] = WHITEDEFAULT | BLACKDEFAULT;
	this->pieceBoard[White] = WHITEDEFAULT;
	this->pieceBoard[WhitePawn] = WHITEDEFAULT & PAWNDEFAULT;
	this->pieceBoard[WhiteKnight] = WHITEDEFAULT & KNIGHTDEFAULT;
	this->pieceBoard[WhiteBishop] = WHITEDEFAULT & BISHOPDEFAULT;
	this->pieceBoard[WhiteRook] = WHITEDEFAULT & ROOKDEFAULT;
	this->pieceBoard[WhiteQueen] = WHITEDEFAULT & QUEENDEFAULT;
	this->pieceBoard[WhiteKing] = WHITEDEFAULT & KINGDEFAULT;
	this->pieceBoard[Black] = BLACKDEFAULT;
	this->pieceBoard[BlackPawn] = BLACKDEFAULT & PAWNDEFAULT;
	this->pieceBoard[BlackKnight] = BLACKDEFAULT & KNIGHTDEFAULT;
	this->pieceBoard[BlackBishop] = BLACKDEFAULT & BISHOPDEFAULT;
	this->pieceBoard[BlackRook] = BLACKDEFAULT & ROOKDEFAULT;
	this->pieceBoard[BlackQueen] = BLACKDEFAULT & QUEENDEFAULT;
	this->pieceBoard[BlackKing] = BLACKDEFAULT & KINGDEFAULT;
}

Board::Board(const uint64_t pieceBoard[PieceCount])
{
	for (int i = 0; i < PieceCount; i++)
	{
		this->pieceBoard[i] = pieceBoard[i];
	}
}

Board::~Board()
= default;

uint64_t Board::getPieces(PieceType pt)
{
	return pieceBoard[pt];
}

