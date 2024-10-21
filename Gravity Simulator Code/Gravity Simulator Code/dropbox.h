#pragma once
#include <raylib.h>
using namespace std;

class dropbox {
private:
	
	char* options[10][64];
	int selector_pos_x, selector_pos_y;
	int pos_x, pos_y;
	int width, height;

public:

	dropbox();
	void drawDropBox(int pos_x, int pos_y, int width, int height);
	char *updateDropBox();
	void populate(char* newoption);

};