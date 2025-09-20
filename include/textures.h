#ifndef TEXTURES_H
#define TEXTURES_H

#include "raylib.h"

struct GameTextures {
    Texture2D Black;
    Texture2D Brick;
    Texture2D BrickAngle;
    Texture2D Floor;
    Texture2D Frame;
    Texture2D Frame1;
    Texture2D Frame2;
    Texture2D Frame3;
    Texture2D Frame4;
    Texture2D Frame5;
    Texture2D Frame6;
    Texture2D Frame7;
    Texture2D leftstripe;
    Texture2D sidewall;
    Texture2D topangle;
    Texture2D wall1;
    Texture2D wallbrick;
};

GameTextures LoadGameTextures();
void UnloadGameTextures(GameTextures& tex);

#endif
