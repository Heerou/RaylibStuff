#include "raylib.h"

int main(void)
{
    const int screeWidth = 800;
    const int screeHeight = 450;

    InitWindow(screeWidth, screeHeight, "Input Mouse Wheel");

    int boxPosY = screeHeight / 2 - 40;
    int scrollSpeed = 4;

    SetTargetFPS(60);

    while (!WindowShouldClose())
    {
        boxPosY -= (GetMouseWheelMove() * scrollSpeed);

        BeginDrawing();
            ClearBackground(RAYWHITE);
            DrawRectangle(screeWidth / 2 - 40, boxPosY, 80, 80, RED);
            DrawText("move the square with mouse wheel!", 10, 10, 20, GRAY);
            DrawText(TextFormat("Square position Y: %03i", boxPosY), 10, 40, 20, LIGHTGRAY);
        EndDrawing();
    }

    CloseWindow();
    return 0;
}