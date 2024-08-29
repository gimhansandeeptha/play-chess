#ifndef PAWN_H
#define PAWN_H

#include "ChessBoard.h"

class Pawn : public Piece
{
public:
    void move() override;
    void movable(const ChessBoard &chessBoard, Loc loc) override;
};

#endif