#include "MoveGen.h"

Bitboard MoveGen::getPawnMoves(Bitboard position, bool isWhite, Board *board) {
    // Check moving forward one
    Bitboard singlePush;
    Bitboard doublePush;
    Bitboard westAttack;
    Bitboard eastAttack;

    if(isWhite)
    {
        singlePush = (position << 8) & ~board->getAllPieces();
        doublePush = ((position & RANK1) << 16) & ~board->getAllPieces();
        westAttack = ((position & ~FILEA) << 7) & (board->getPieces(Black) | board->getEnPessant());
        eastAttack = ((position & ~FILEH) << 9) & (board->getPieces(Black) | board->getEnPessant());
    }
    else
    {
        singlePush = (position >> 8) & ~board->getAllPieces();
        doublePush = ((position & RANK7) >> 16) & ~board->getAllPieces();
        westAttack = ((position & ~FILEA) >> 9) & (board->getPieces(White) | board->getEnPessant());
        eastAttack = ((position & ~FILEH) >> 7) & (board->getPieces(White) | board->getEnPessant());
    }
    return (singlePush | doublePush | westAttack | eastAttack);
}

Bitboard MoveGen::getKnightMoves(Bitboard position, bool isWhite, Board *board)
{
    Bitboard ally;
    if (isWhite)
        ally = board->getPieces(White);
    else
        ally = board->getPieces(Black);

    Bitboard noNoEa = (position << 17) & ~FILEA;
    Bitboard noEaEa = (position << 10) & ~(FILEA | FILEB);
    Bitboard soEaEa = (position >> 6) & ~(FILEA | FILEB);
    Bitboard soSoEa = (position >> 15) & ~FILEA;
    Bitboard soSoWe = (position >> 17) & ~FILEH;
    Bitboard soWeWe = (position >> 10) & ~(FILEG | FILEH);
    Bitboard noWeWe = (position << 6) & ~(FILEG | FILEH);
    Bitboard noNoWe = (position << 15) & ~FILEH;

    return ((noNoEa | noEaEa | soEaEa | soSoEa | soSoWe | soWeWe | noWeWe | noNoWe) & ~ally);
}