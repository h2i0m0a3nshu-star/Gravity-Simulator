#pragma once
#include <raylib.h>
#include "textbox.h"
using namespace std;

class Screen {
private:

public:
	virtual void draw() = 0;
	virtual Screen *update() = 0;
};

class MainScreen:public Screen{
private:								// Private Section of the MainScreen Handler Class
	textbox test;
public:									// Public Section of the MainScreen Handler Class
	void draw() override;				// Function to handle the drawing
	Screen *update() override;			// Function to handle the updating of the screen
};