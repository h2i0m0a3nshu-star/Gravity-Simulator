#include "Screen.h"
#include <raylib.h>
using namespace std;

// Game Handler Class
class game {

private:								// Private Section of the Game Handler Class

	Screen* currScreen;
	MainScreen GravitySIM_MainScreen;
	void draw();						// Function to handle the drawing
	void update();						// Function to handle the updating
	void fullScreen();					// Function to handle the fullscreen

public:									// Public Section of the Game Handler Class
	
	game() = delete;					// Default Constructor
	game(int width, int height);		// Constructor
	game(game& other) = delete;			// Copy Constructor Deleted
	void tick();						// Function to handler the game
	bool should_game_close();			// Function to check if the game should be closed to exit out from the loop
	~game();							// Default Destructor

};