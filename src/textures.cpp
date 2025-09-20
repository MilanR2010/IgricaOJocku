#include "textures.h"

GameTextures LoadGameTextures() {
    GameTextures tex;
    tex.Black = LoadTexture("black.png");
    tex.Brick = LoadTexture("brick.png");
    tex.BrickAngle = LoadTexture("brickangle.png");
    tex.Floor = LoadTexture("floor.png");
    tex.Frame = LoadTexture("frame.png");
    tex.Frame1 = LoadTexture("frame1.png");
    tex.Frame2 = LoadTexture("frame2.png");
    tex.Frame3 = LoadTexture("frame3.png");
    tex.Frame4 = LoadTexture("frame4.png");
    tex.Frame5 = LoadTexture("frame5.png");
    tex.Frame6 = LoadTexture("frame6.png");
    tex.Frame7 = LoadTexture("frame7.png");
    tex.leftstripe = LoadTexture("leftstripe.png");
    tex.sidewall = LoadTexture("sidewall.png");
    tex.topangle = LoadTexture("topangle.png");
    tex.wall1 = LoadTexture("wall1.png");
    tex.wallbrick = LoadTexture("wallbrick.png");
    return tex;
}

void UnloadGameTextures(GameTextures& tex) {
    UnloadTexture(tex.Black);
    UnloadTexture(tex.Brick);
    UnloadTexture(tex.BrickAngle);
    UnloadTexture(tex.Floor);
    UnloadTexture(tex.Frame);
    UnloadTexture(tex.Frame1);
    UnloadTexture(tex.Frame2);
    UnloadTexture(tex.Frame3);
    UnloadTexture(tex.Frame4);
    UnloadTexture(tex.Frame5);
    UnloadTexture(tex.Frame6);
    UnloadTexture(tex.Frame7);
    UnloadTexture(tex.leftstripe);
    UnloadTexture(tex.sidewall);
    UnloadTexture(tex.topangle);
    UnloadTexture(tex.wall1);
    UnloadTexture(tex.wallbrick);
}
