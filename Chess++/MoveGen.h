#ifndef MOVE_GEN_H
#define MOVE_GEN_H

#include "BaseBitboards.h"
#include "Board.h"
#include "MagicMoves.hpp"

class MoveGen
{
  private:
    Board* chessBoard;

  public:
    MoveGen();
    ~MoveGen();
    Bitboard getPawnMoves(unsigned short position, bool isWhite, Board *board);
    Bitboard getKnightMoves(unsigned short position, bool isWhite, Board *board);
    Bitboard getBishopMoves(unsigned short position, bool isWhite, Board *board);
    Bitboard getRookMoves(unsigned short position, bool isWhite, Board *board);
    Bitboard getQueenMoves(unsigned short position, bool isWhite, Board *board);
    Bitboard getKingMoves(unsigned short position, bool isWhite, Board *board);
};

#endif