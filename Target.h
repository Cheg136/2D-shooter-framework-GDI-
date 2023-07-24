// Target.h
#pragma once
#include <Windows.h>
#include <Gdiplus.h>

class Target {
public:
    Target();
    void Draw(Graphics& graphics);
    void Update(float deltaTime);
    bool IsHit(const RectF& bulletBounds);
};
