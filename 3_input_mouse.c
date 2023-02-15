#include "raylib.h"

int main(void)
{
    const int screenWidth = 800;
    const int screenHeight = 450;

    InitWindow(screenWidth, screenHeight, "Inputs Mouse Testing");
    Vector2 ballPos = {-100.0f, -100.0};
    Color ballColor = DARKBLUE;
    SetTargetFPS(60);

    while (!WindowShouldClose())
    {
        ballPos = GetMousePosition();
        if (IsMouseButtonPressed(MOUSE_BUTTON_LEFT))
            ballColor = RED;
        else if (IsMouseButtonPressed(MOUSE_BUTTON_RIGHT))
            ballColor = BLUE;

        BeginDrawing();
        ClearBackground(RAYWHITE);
        DrawCircleV(ballPos, 40, ballColor);
        DrawText("Move the ball... Now with mouse!", 10, 10, 20, DARKGRAY);
        EndDrawing();
    }

    CloseWindow();
    return 0;
}