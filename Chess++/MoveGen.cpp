#include "MoveGen.h"

/**
 * Gets all pawn moves including single push, double push, attack, and en pessant
 * @param position the pawn's position
 * @param isWhite whether the pawn is white
 * @param board the current board
 */
Bitboard MoveGen::getPawnMoves(unsigned short position, bool isWhite, Board *board)
{
    Bitboard pos = ((Bitboard)1 << position);

    Bitboard singlePush;
    Bitboard doublePush;
    Bitboard westAttack;
    Bitboard eastAttack;

    if(isWhite)
    {
        singlePush = (pos << 8) & ~board->getAllPieces();
        doublePush = ((pos & RANK1) << 16) & ~board->getAllPieces();
        westAttack = ((pos & ~FILEA) << 7) & (board->getPieces(Black) | board->getEnPessant());
        eastAttack = ((pos & ~FILEH) << 9) & (board->getPieces(Black) | board->getEnPessant());
    }
    else
    {
        singlePush = (pos >> 8) & ~board->getAllPieces();
        doublePush = ((pos & RANK7) >> 16) & ~board->getAllPieces();
        westAttack = ((pos & ~FILEA) >> 9) & (board->getPieces(White) | board->getEnPessant());
        eastAttack = ((pos & ~FILEH) >> 7) & (board->getPieces(White) | board->getEnPessant());
    }

    return (singlePush | doublePush | westAttack | eastAttack);
}

Bitboard MoveGen::getKnightMoves(unsigned short position, bool isWhite, Board *board)
{
    Bitboard pos = ((Bitboard)1 << position);

    Bitboard ally = isWhite ? board->getPieces(White) : board->getPieces(Black);

    Bitboard noNoEa = (pos << 17) & ~FILEA;
    Bitboard noEaEa = (pos << 10) & ~(FILEA | FILEB);
    Bitboard soEaEa = (pos >> 6) & ~(FILEA | FILEB);
    Bitboard soSoEa = (pos >> 15) & ~FILEA;
    Bitboard soSoWe = (pos >> 17) & ~FILEH;
    Bitboard soWeWe = (pos >> 10) & ~(FILEG | FILEH);
    Bitboard noWeWe = (pos << 6) & ~(FILEG | FILEH);
    Bitboard noNoWe = (pos << 15) & ~FILEH;

    return ((noNoEa | noEaEa | soEaEa | soSoEa | soSoWe | soWeWe | noWeWe | noNoWe) & ~ally);
}

Bitboard MoveGen::getKingMoves(unsigned short position, bool isWhite, Board *board)
{
    Bitboard pos = ((Bitboard)1 << position);

    Bitboard ally = isWhite ? board->getPieces(White) : board->getPieces(Black);

    Bitboard north = (pos & ~RANK8) << 8;
    Bitboard northWest = (pos & ~(RANK8 | FILEA)) << 7;
    Bitboard northEast = (pos & ~(RANK8 | FILEH)) << 9;
    Bitboard south = (pos & ~RANK1) >> 8;
    Bitboard southWest = (pos & ~(RANK1 | FILEA)) >> 9;
    Bitboard southEast = (pos & ~(RANK1 | FILEH)) >> 7;
    Bitboard west = (pos & ~FILEA) << 1;
    Bitboard east = (pos & ~FILEH) >> 1;

    return ((north | northWest | northEast | south | southWest | southEast | west | east) & ~ally);
}

Bitboard MoveGen::getBishopMoves(unsigned short position, bool isWhite, Board *board)
{
    Bitboard ally = isWhite ? board->getPieces(White) : board->getPieces(Black);

    // Use magic bishop bitboards
    return Bmagic(position, board->getAllPieces()) & ~ally;
}

Bitboard MoveGen::getRookMoves(unsigned short position, bool isWhite, Board *board)
{
    Bitboard ally = isWhite ? board->getPieces(White) : board->getPieces(Black);

    // Use magic rook bitboards
    return Rmagic(position, board->getAllPieces()) & ~ally;
}

Bitboard MoveGen::getQueenMoves(unsigned short position, bool isWhite, Board *board)
{
    Bitboard ally = isWhite ? board->getPieces(White) : board->getPieces(Black);

    // Get Queen moves by combining rook and bishop moves
    return (Bmagic(position, board->getAllPieces()) | Rmagic(position, board->getAllPieces())) & ~ally;
}