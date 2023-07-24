// main.cpp
#include <Windows.h>
#include <Gdiplus.h>
#include "Game.h"

int main() {
    Gdiplus::GdiplusStartupInput gdiplusStartupInput;
    ULONG_PTR gdiplusToken;
    Gdiplus::GdiplusStartup(&gdiplusToken, &gdiplusStartupInput, NULL);

    Game game;
    game.Run();

    Gdiplus::GdiplusShutdown(gdiplusToken);
    return 0;
}
