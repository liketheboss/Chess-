#ifndef BASE_BITBOARDS_H
#define BASE_BITBOARDS_H

#define __64_BIT_INTEGER_DEFINED__

#include <cstdint>

typedef uint64_t Bitboard;

const Bitboard PAWNDEFAULT      = 0x00FF00000000FF00;
const Bitboard KNIGHTDEFAULT    = 0x4200000000000042;
const Bitboard BISHOPDEFAULT    = 0x2400000000000024;
const Bitboard ROOKDEFAULT      = 0x8100000000000081;
const Bitboard QUEENDEFAULT     = 0x0800000000000008;
const Bitboard KINGDEFAULT      = 0x1000000000000010;
const Bitboard WHITEDEFAULT     = 0x000000000000FFFF;
const Bitboard BLACKDEFAULT     = 0xFFFF000000000000;

const Bitboard FILEA = 0x0101010101010101;
const Bitboard FILEB = FILEA << 1;
const Bitboard FILEC = FILEA << 2;
const Bitboard FILED = FILEA << 3;
const Bitboard FILEE = FILEA << 4;
const Bitboard FILEF = FILEA << 5;
const Bitboard FILEG = FILEA << 6;
const Bitboard FILEH = FILEA << 7;

const Bitboard RANK1 = 0xFF;
const Bitboard RANK2 = RANK1 << (8 * 1);
const Bitboard RANK3 = RANK1 << (8 * 2);
const Bitboard RANK4 = RANK1 << (8 * 3);
const Bitboard RANK5 = RANK1 << (8 * 4);
const Bitboard RANK6 = RANK1 << (8 * 5);
const Bitboard RANK7 = RANK1 << (8 * 6);
const Bitboard RANK8 = RANK1 << (8 * 7);

const Bitboard ALLSQUARES   = 0xFFFFFFFFFFFFFFFF;
const Bitboard EMPTY = 0;
const Bitboard DARKSQUARES  = 0xAA55AA55AA55AA55;

#endif
