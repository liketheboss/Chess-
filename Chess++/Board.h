#ifndef BOARD_H
#define BOARD_H


#include <cstdint>
#include "BaseBitboards.h"
#include "PieceType.h"

const int ROWS = 8;
const int COLUMNS = 8;

class Board
{
  private:
    Bitboard pieces[PieceCount]{};
    void initBoard();

  public:
    Board();
    Board(const Bitboard copyPieces[PieceCount]);
    ~Board();
    Bitboard getPieces(PieceType pt);
    Bitboard getAllPieces();
    Bitboard getEnPessant(); // Holds enpessant-able location if pawn double pushed in last move
};

#endif