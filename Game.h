// Game.h
#pragma once
#include <vector>
#include "Player.h"
#include "Target.h"

class Game {
public:
    Game();
    void Run();
    void Draw(Graphics& graphics);
    void Update(float deltaTime);
    void HandleInput();
private:
    Player player;
    std::vector<Target> targets;
    std::vector<Bullet> bullets;
};
