#include <iostream>
#include "raylib.h"
#include "map.h"
#include "textures.h"

int main() {
    InitWindow(800,800,"Igrica O Jocku");

    GameTextures tex = LoadGameTextures();

    int tilex = 40;
    int tiley = 40;

    while (!WindowShouldClose()) {
        BeginDrawing();
        ClearBackground(RAYWHITE);

        for (int i = 0; i < MAP_HEIGHT; i++) {
            for (int j = 0; j < MAP_WIDTH; j++) {
                int tile = map[i][j];
                switch (tile) {
                    case 17: DrawTexture(tex.Black, j*tilex, i*tiley, WHITE); break;
                    case 1:  DrawTexture(tex.Floor, j*tilex, i*tiley, WHITE); break;
                    case 8:  DrawTexture(tex.Frame1, j*tilex, i*tiley, WHITE); break;
                    case 6:  DrawTexture(tex.sidewall, j*tilex, i*tiley, WHITE); break;
                    case 12: DrawTexture(tex.Frame4, j*tilex, i*tiley, WHITE); break;
                    case 15: DrawTexture(tex.Frame7, j*tilex, i*tiley, WHITE); break;
                    case 10: DrawTexture(tex.Frame3, j*tilex, i*tiley, WHITE); break;
                    case 16: DrawTexture(tex.Brick, j*tilex, i*tiley, WHITE); break;
                    case 7:  DrawTexture(tex.Frame, j*tilex, i*tiley, WHITE); break;
                    case 9:  DrawTexture(tex.Frame2, j*tilex, i*tiley, WHITE); break;
                    case 14: DrawTexture(tex.Frame6, j*tilex, i*tiley, WHITE); break;
                    case 13: DrawTexture(tex.Frame5, j*tilex, i*tiley, WHITE); break;
                    case 2:  DrawTextureEx(tex.BrickAngle, {(float)j*tilex,(float)i*tiley}, 0, 0.333f, WHITE); break;
                    case 3:  DrawTextureEx(tex.topangle, {(float)j*tilex,(float)i*tiley}, 0, 0.333f, WHITE); break;
                    case 4:  DrawTextureEx(tex.leftstripe, {(float)j*tilex,(float)i*tiley}, 0, 0.333f, WHITE); break;
                    case 5:  DrawTextureEx(tex.wallbrick, {(float)j*tilex,(float)i*tiley}, 0, 0.333f, WHITE); break;
                    case 11: DrawTexture(tex.wall1, j*tilex, i*tiley, WHITE); break;
                }
            }
        }

        EndDrawing();
    }

    UnloadGameTextures(tex);
    CloseWindow();
}
