// Player.h
#pragma once
#include <Windows.h>
#include <Gdiplus.h>

class Player {
public:
    Player();
    void Draw(Graphics& graphics);
    void Update(float deltaTime);
    void Shoot(std::vector<Bullet>& bullets);
};
