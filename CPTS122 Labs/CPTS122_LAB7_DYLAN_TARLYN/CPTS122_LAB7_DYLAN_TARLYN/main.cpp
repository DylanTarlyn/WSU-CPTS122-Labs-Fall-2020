#include "Player.h"
#include "Die.h"

int main() {
	Die die;
	Player game;
	bool exitFlag = true; // for exiting the 
	char select = ' ';

	game.welcome();


	while (exitFlag) { // while the flag to exit isn't triggered
		cout << "Enter R to roll dice\n";
		cout << "Enter E to end the round and stop rolling\n";
		cout << "Press Q to quit the game\n";
		cin >> select;
		system("CLS");

		switch (select) {
		case 'R':
		case 'r': die.roll();
			break;
		case 'E':
		case'e': die.compareTotals();
			break;
		case 'Q':
		case 'q': cout << "Thank you for playing!\n\n";
			exitFlag = false;
			break;
		defualt: return 0;
		}
	}
	

	return 0;
}