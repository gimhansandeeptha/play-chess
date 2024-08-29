// ChessBoard.cpp
#include "ChessBoard.h"
#include <iostream>

ChessBoard::ChessBoard()
{
    board = "";
}

void ChessBoard::setupInitialPosition()
{
    board = "rnbqkbnrpppppppp0000000000000000000A0000000G0000PPPPPPPPRNBQKBNR";
}

char ChessBoard::getPieceAt(Loc loc) const
{
    int piece_idx = 8 * (8 - loc.rank) + loc.file - 1;
    if (board[piece_idx] != '0')
        return board[piece_idx];
    else
        return NULL;
}

char ChessBoard::setPieceAt(Loc loc, char new_piece)
{
    int piece_idx = 8 * (8 - loc.rank) + loc.file - 1;
    char current_piece = board[piece_idx];
    board[piece_idx] = new_piece;
    return current_piece;
}
