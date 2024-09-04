#ifndef PIECE_H
#define PIECE_H
#include "Structs.h"

class ChessBoard;
struct Piece;

/*Location of a perticular piece, this is the row(ranks) number and column(files) number
rank: is counted from white side from 1 to 8.
file: is from left to write from "a" to "h" from the white side. File is denoted by number from 1 to 8.
*/
class Piece
{
public:
    virtual void move() = 0;
    virtual void movable(const ChessBoard &chessBoard, Loc loc) = 0;
};

#endif
