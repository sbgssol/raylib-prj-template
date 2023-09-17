#include "raylib.h"

int main() {
  InitWindow(800, 600, "Hello raylib!");

  while (!WindowShouldClose())    // Detect window close button or ESC key
  {
    BeginDrawing();

    ClearBackground(RAYWHITE);

    EndDrawing();
  }

  CloseWindow();

  return 0;
}