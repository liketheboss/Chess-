#include "MoveGen.h"

/**
 * Gets all pawn moves including single push, double push, attack, and en pessant
 * @param position the pawn's position
 * @param isWhite whether the pawn is white
 * @param board the current board
 */
Bitboard MoveGen::getPawnMoves(Bitboard position, bool isWhite, Board *board) {
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
    Bitboard ally = isWhite ? board->getPieces(White) : board->getPieces(Black);

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

Bitboard MoveGen::getKingMoves(Bitboard position, bool isWhite, Board *board)
{
    Bitboard ally = isWhite ? board->getPieces(White) : board->getPieces(Black);

    Bitboard north = (position & ~RANK8) << 8;
    Bitboard northWest = (position & ~(RANK8 | FILEA)) << 7;
    Bitboard northEast = (position & ~(RANK8 | FILEH)) << 9;
    Bitboard south = (position & ~RANK1) >> 8;
    Bitboard southWest = (position & ~(RANK1 | FILEA)) >> 9;
    Bitboard southEast = (position & ~(RANK1 | FILEH)) >> 7;
    Bitboard west = (position & ~FILEA) << 1;
    Bitboard east = (position & ~FILEH) >> 1;

    return ((north | northWest | northEast | south | southWest | southEast | west | east) & ~ally);
}