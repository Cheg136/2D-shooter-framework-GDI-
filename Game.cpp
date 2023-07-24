// Game.cpp
#include <Windows.h>
#include <Gdiplus.h>
#include "Game.h"

Game::Game() {
    // Initialize game objects and resources here
}

void Game::Run() {
    MSG msg;
    float prevTime = static_cast<float>(GetTickCount64()) / 1000.0f;

    while (true) {
        if (PeekMessage(&msg, NULL, 0, 0, PM_REMOVE)) {
            if (msg.message == WM_QUIT)
                break;
            TranslateMessage(&msg);
            DispatchMessage(&msg);
        }

        float currentTime = static_cast<float>(GetTickCount64()) / 1000.0f;
        float deltaTime = currentTime - prevTime;
        prevTime = currentTime;

        HandleInput();
        Update(deltaTime);
        Draw(graphics);
    }
}

void Game::Draw(Graphics& graphics) {
    // Draw game objects here using GDI+
}

void Game::Update(float deltaTime) {
    // Update game objects here based on deltaTime
}

void Game::HandleInput() {
    // Handle player input here
}
