#ifndef BOARDGRAPHICS_H
#define BOARDGRAPHICS_H

#include "Structs.h"

class BoardGraphics
{
public:
    BoardGraphics();
    void drawChessBoard();
    void setPieceAt(char piece, Loc loc);
};

#endif