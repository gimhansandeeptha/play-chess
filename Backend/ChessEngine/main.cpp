#include <iostream>
#include "Pawn.h"
#include "Piece.h"
#include "BoardGraphics.h"

int main()
{
    std::cout << "Welcome to the Chess Engine!" << std::endl;
    Loc loc = {2, 4};
    BoardGraphics boardGraphics;
    boardGraphics.drawChessBoard();
    boardGraphics.setPieceAt('p', loc);
    ChessBoard chessBoard;
    chessBoard.setupInitialPosition();
    Pawn pawn;
    pawn.movable(chessBoard, loc);

    std::cout << "Chess Engine Exitting!" << std::endl;

    return 0;
}
