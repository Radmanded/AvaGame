#include "raylib.h"
#include "raylib.hpp"
#include "cmath"

#include <gem.hpp>

#pragma once

class amethyst: public gem
{
private:
    static Texture2D gemTexture;
    static Texture2D geodeTexture; 
public:
    amethyst(Vector2 pos);
    int update();
    ~amethyst();

};