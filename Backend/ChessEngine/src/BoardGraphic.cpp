/*Code adaptod from: https://www.geeksforgeeks.org/draw-a-chess-board-using-graphics-programming-in-c/ */
// C program to create a chess board
#include "BoardGraphics.h"
#include <conio.h>
#include <dos.h>
#include <stdio.h>
#include "graphics.h"
#include <iostream>
#include <windows.h>

BoardGraphics::BoardGraphics()
{
    // Constructor implementation, if needed
}

// Function to draw a chessboard
void BoardGraphics::drawChessBoard()
{
    int gr = DETECT, gm;
    int r, c, x = 30, y = 30, black = 0;

    // Initialize graphics mode
    initgraph(&gr, &gm, ""); // Use empty string for default path or specify the path if necessary

    // Iterate over 8 rows
    for (r = 0; r < 8; r++)
    {
        // Iterate over 8 columns
        for (c = 1; c <= 8; c++)
        {
            // If current block is to color as black
            if (black == 0)
            {
                setcolor(WHITE);
                setfillstyle(SOLID_FILL, BLACK);
                rectangle(x, y, x + 30, y + 30);
                floodfill(x + 1, y + 1, WHITE);
                black = 1;
            }
            // If current block is to color as white
            else
            {
                setcolor(WHITE);
                setfillstyle(SOLID_FILL, WHITE);
                rectangle(x, y, x + 30, y + 30);
                floodfill(x + 1, y + 1, WHITE);
                black = 0;
            }
            x = x + 30;
            // delay(30);
        }
        if (black == 0)
            black = 1;
        else
            black = 0;

        delay(30);
        x = 30;
        y = 30 + y;
    }

    while (true)
    {
        // Check for ESC key press to exit
        if (GetAsyncKeyState(VK_ESCAPE))
            break;

        // Implement asynchronous drawing or event handling here

        // Small delay to avoid high CPU usage
        delay(10);
    }
    closegraph();
}

void BoardGraphics::setPieceAt(char piece, Loc loc)
{
    int x = 30 + loc.file * 30;
    int y = 30 + loc.rank * 30;

    setcolor(RED);
    setfillstyle(SOLID_FILL, RED);
    outtextxy(x + 10, y + 5, &piece);
}