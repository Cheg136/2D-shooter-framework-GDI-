// Bullet.h
#pragma once
#include <Windows.h>
#include <Gdiplus.h>

class Bullet {
public:
    Bullet(float x, float y);
    void Draw(Graphics& graphics);
    void Update(float deltaTime);
    RectF GetBounds() const;
};
