#include "dropbox.h"

dropbox::dropbox()
{
	pos_x = 0;
	pos_y = 0;
	
	width = 0;
	height = 0;

	selector_pos_x = 0;
	selector_pos_y = 0;
}

void dropbox::drawDropBox(int pos_x, int pos_y, int width, int height)
{
	if (height < 30) {
		height = 50;
	}

	this->pos_x = pos_x;
	this->pos_y = pos_y;
	this->width = width;
	this->height = height;
	selector_pos_x = pos_x;
	
	DrawRectangleLines(pos_x, pos_y, width, height, GREEN);
	DrawText(options[0][0], pos_x + 10, pos_y + 10, 30, GREEN);
}

char* dropbox::updateDropBox()
{
	Vector2 MousePos = GetMousePosition();
	selector_pos_y = MousePos.y;
	return nullptr;
}
