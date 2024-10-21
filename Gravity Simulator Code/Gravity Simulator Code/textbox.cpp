#include "textbox.h"

textbox::textbox()
{
	curr = 0;
	stringArr[MAX - 1] = '\0';
}

void textbox::drawTextbox(int pos_x, int pos_y, int width, int height, int font_size) {
	if (height < font_size) {
		height = font_size + 20;
	}
	DrawRectangleLines(pos_x, pos_y, width, height, GREEN);
	DrawText(stringArr, pos_x + 10, pos_y + 10, font_size, GREEN);
	
}

char *textbox::updateTextbox() {
	int key = GetKeyPressed();
	
	if (key >= 32 && key <= 125 && curr <= 99 && key != KEY_SPACE && curr < MAX) {
		stringArr[curr] = char(key);
		stringArr[curr + 1] = '\0';
		curr++;
	}

	if (key == KEY_BACKSPACE && curr > 0) {
		curr--;
		stringArr[curr] = '\0';
	}

	return stringArr;
}

void textbox::clearTextbox()
{
	for (int i = 0; i < curr; i++) {
		stringArr[i] = '\0';
	}
	curr = 0;
}
