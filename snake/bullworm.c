#include "src/button.h"
#include "bullworm.h"

int kernelmain(int argc, char **argv)
{
	// Create some menu buttons
	struct Button play_button;
	struct Button quit_button;
	struct Button leaderboard_button;

	// Initialize Buttons
	button_init(&play_button, "Play", 50, 50, 0x00);
	button_init(&quit_button, "Quit", 150, 40, 0x00);
	button_init(&leaderboard_button, "Leaderboard", 150, 60, 0x00);

	button_set_selected(&play_button, 1);


	// Set video mode
	set_video_mode(0x0D);

	// Clear the screen
	//clear_screen();

	// Show the button
	show_button(&play_button);

	return 0;
}
