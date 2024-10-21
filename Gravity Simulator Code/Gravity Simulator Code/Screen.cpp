#include "Screen.h"

void MainScreen::draw()
{
	DrawText("GRAVITY\nSIMULATOR", GetScreenWidth() / 5, GetScreenHeight() / 5, 100, BLUE);
	DrawText("PRESS SPACE TO START", GetScreenWidth() / 20, GetScreenHeight() - 60, 20, GREEN);
	test.drawTextbox(10, 50, 200, 20, 30);
}

Screen* MainScreen::update()
{
	test.updateTextbox();
	return this;
}


