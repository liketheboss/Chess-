#include "Board.h"
#include "BaseBitboards.h"

Board::Board()
{
    
}

Board::Board(const Bitboard copyPieces[PieceCount])
{
    for (int i = 0; i < PieceCount; i++)
    {
        this->pieces[i] = pieces[i];
    }
}

void Board::initBoard()
{
    pieces[All] = WHITEDEFAULT | BLACKDEFAULT;
    pieces[White] = WHITEDEFAULT;
    pieces[WhitePawn] = WHITEDEFAULT & PAWNDEFAULT;
    pieces[WhiteKnight] = WHITEDEFAULT & KNIGHTDEFAULT;
    pieces[WhiteBishop] = WHITEDEFAULT & BISHOPDEFAULT;
    pieces[WhiteRook] = WHITEDEFAULT & ROOKDEFAULT;
    pieces[WhiteQueen] = WHITEDEFAULT & QUEENDEFAULT;
    pieces[WhiteKing] = WHITEDEFAULT & KINGDEFAULT;
    pieces[Black] = BLACKDEFAULT;
    pieces[BlackPawn] = BLACKDEFAULT & PAWNDEFAULT;
    pieces[BlackKnight] = BLACKDEFAULT & KNIGHTDEFAULT;
    pieces[BlackBishop] = BLACKDEFAULT & BISHOPDEFAULT;
    pieces[BlackRook] = BLACKDEFAULT & ROOKDEFAULT;
    pieces[BlackQueen] = BLACKDEFAULT & QUEENDEFAULT;
    pieces[BlackKing] = BLACKDEFAULT & KINGDEFAULT;
}

Board::~Board() = default;

Bitboard Board::getPieces(PieceType pt)
{
    return pieces[pt];
}
