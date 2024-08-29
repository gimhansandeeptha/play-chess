#include "Pawn.h"
// #include "ChessBoard.h"
#include <cassert>
#include <iostream>

void Pawn::move()
{

    std::cout << "Pawn moves forward by one square." << std::endl;
}

void Pawn::movable(const ChessBoard &chessBoard, Loc loc)
{
    char pawn = chessBoard.getPieceAt(loc);
    assert(pawn == 'p' || pawn == 'P');

    /*White Powns*/
    if (pawn == 'P')
    {
        printf("White Pown\n");
        if (loc.rank < 8)
        {
            Loc new_loc = {loc.rank + 1, loc.file};
            char current_piece = chessBoard.getPieceAt(new_loc);
            // check the new_loc already has a piece
            if (!current_piece)
            {
                printf("Moving the piece to Rank: %d, File: %d\n", new_loc.rank, new_loc.file);
            }
            else
            {
                printf("Capturing Piece %c in Rank: %d, File: %d\n", current_piece, new_loc.rank, new_loc.file);
            }
        }
        // check the piece at starting position.
        if (loc.rank == 2)
        {
            Loc new_loc = {loc.rank + 2, loc.file};
            char current_piece = chessBoard.getPieceAt(new_loc);
            if (!current_piece)
            {
                printf("Moving the piece to Rank: %d, File: %d\n", new_loc.rank, new_loc.file);
            }
            else
            {
                printf("Capturing Piece %c in Rank: %d, File: %d\n", current_piece, new_loc.rank, new_loc.file);
            }
        }
    }
    /*Black Powns*/
    if (pawn == 'p')
    {
        printf("Black Pown\n");
        if (loc.rank > 1)
        {
            Loc new_loc = {loc.rank - 1, loc.file};
            char current_piece = chessBoard.getPieceAt(new_loc);
            if (!current_piece)
            {
                printf("Moving the piece to Rank: %d, File: %d\n", new_loc.rank, new_loc.file);
            }
            else
            {
                printf("Capturing Piece %c in Rank: %d, File: %d\n", current_piece, new_loc.rank, new_loc.file);
            }
        }
        if (loc.rank == 7)
        {
            Loc new_loc = {loc.rank - 2, loc.file};
            char current_piece = chessBoard.getPieceAt(new_loc);
            if (!current_piece)
            {
                printf("Moving the piece to Rank: %d, File: %d\n", new_loc.rank, new_loc.file);
            }
            else
            {
                printf("Capturing Piece %c in Rank: %d, File: %d\n", current_piece, new_loc.rank, new_loc.file);
            }
        }
    }
}
