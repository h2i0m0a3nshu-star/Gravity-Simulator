#pragma once
#include <raylib.h>
using namespace std;

// Class to handle the textbox functions
class textbox {

private:								// Private Section of the Game Handler Class

	const static int MAX = 64;				// MAX for the string array
	int curr;							// curr - iterator for the array
	char stringArr[MAX];				// array to store the characters

public:									// Public Section of the Game Handler Class

	textbox();																		// textbox constructor
	void drawTextbox(int pos_x,int pos_y,int width,int height, int font_box);		// Function to draw the textbox
	char *updateTextbox();															// Function to update the textbox mechanism
	void clearTextbox();															// Function to clear the textbox

};