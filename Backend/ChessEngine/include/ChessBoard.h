// ChessBoard.h
#ifndef CHESSBOARD_H
#define CHESSBOARD_H

#include <vector>
#include <string>
#include "Piece.h"

class ChessBoard
{
public:
    ChessBoard();

    /*Set up the initial position of the chess board*/
    void setupInitialPosition();

    char getPieceAt(Loc loc) const;

    /*Set the given piece at the given location. returns the previous piece of the location*/
    char setPieceAt(Loc loc, char new_piece);

private:
    std::string board;
};

#endif