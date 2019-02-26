#ifndef MOVE_GEN_H
#define MOVE_GEN_H

#include "BaseBitboards.h"
#include "Board.h"

class MoveGen
{
  private:
    Board* chessBoard;

  public:
    MoveGen();
    ~MoveGen();
    Bitboard getPawnMoves(Bitboard position, bool isWhite, Board *board);
    Bitboard getKnightMoves(Bitboard position, bool isWhite, Board *board);
    Bitboard getBishopMoves(Bitboard position, bool isWhite, Board *board);
    Bitboard getRookMoves(Bitboard position, bool isWhite, Board *board);
    Bitboard getQueenMoves(Bitboard position, bool isWhite, Board *board);
    Bitboard getKnightMoves(Bitboard position, bool isWhite, Board *board);
};

#endif