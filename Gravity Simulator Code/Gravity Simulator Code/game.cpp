#include "game.h"

void game::draw()
{
	currScreen->draw();
}

void game::update()
{
	if (IsKeyPressed(KEY_F1)) {
		fullScreen();
	}
	DrawText("PRESS F1 FOR FULLSCREEN", GetScreenWidth() / 20, GetScreenHeight() - 30, 20, GREEN);
	Screen* nextScreen = currScreen->update();

	if (nextScreen != currScreen) {
		currScreen = nextScreen;
	}
	
}

void game::fullScreen()
{
	ToggleFullscreen();
}

// Constructor
game::game(int width, int height) {
	
	
	InitWindow(width, height, "GRAVITY SIMULATOR");			// Begin the Screen Rendering
	SetTargetFPS(60);										// Set the target FPS
	currScreen = &GravitySIM_MainScreen;
}

void game::tick()
{

	update();												// update the mechanics
	BeginDrawing();											// Begin the drawing from here 
	ClearBackground(BLACK);									// Refresh the Background to black after every frame
	draw();													// Function to handle the drawing
	EndDrawing();											// End the Drawing after this 

}

// Function to check if the game should be closed to exit out from the loop
bool game::should_game_close()
{
	return WindowShouldClose();

}

// Default Destructor
game::~game()
{
	CloseWindow();
}

