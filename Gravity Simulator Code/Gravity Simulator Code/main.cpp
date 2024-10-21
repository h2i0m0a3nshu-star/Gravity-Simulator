#include "game.h"
using namespace std;

int main(){
	
	// Declaring the Width and Height of the Screen as constants
	const int WIDTH = 1080, HEIGHT = 720;
	
	// Making the instance of the game 
	game GravitySIM(WIDTH, HEIGHT);

	// The game Loop
	while (!GravitySIM.should_game_close()){
	
		// Calling in the tick function
		GravitySIM.tick();
	
	}
	
	//Exit
	return 0;
}