#include "Player.h"
#include "Die.h"

Die::Die() {
	Die1 = 0;
	Die2 = 0;



}

void Die::roll() {

	int dice;
	int pTotal; // temporary player total
	int cTotal; // temporary computer total

	if (cTotalRoll < 21 && pTotalRoll < 21)
	{

		srand(time(0)); // creats random seed based on console time

		// COMPUTER ROLL

		dice = rand() % 5 + 1; // initializes value 1-6
		Die1 = dice;
		dice = rand() % 5 + 1; // initializes value 1-6
		Die2 = dice;

		cTotal = Die1 + Die2; // rolls for the computer and stores the total value
		cTotalRoll = cTotalRoll + cTotal; // stores the running total
		//cout << "TEST #1: " << Die1 << endl;
		//cout << "TEST #2: " << Die2 << endl;
		//cout << "TEST total is: " << cTotalRoll << "\n\n\n";

		// PLAYER ROLL

		dice = rand() % 5 + 1; // initializes value 1-6
		Die1 = dice;
		dice = rand() % 5 + 1; // initializes value 1-6
		Die2 = dice;

		pTotal = Die1 + Die2;
		pTotalRoll = pTotalRoll + pTotal;

		cout << "Die #1: " << Die1 << endl;
		cout << "Die #2: " << Die2 << endl;
		cout << "Your total is: " << pTotalRoll << "\n\n\n";
	}

	// favors player busting over computer busting aka if you both bust the player loses, 
	// but favors player blackjack over player blackjack aka if you both have blackjack the player wins

	if (cTotalRoll == 21)
	{
		system("CLS");
		cout << "The computer has blackjack, you lose :(\n\n\n";
		cTotalRoll = 0;
		pTotalRoll = 0;
		comWins = comWins + 1;
		cout << "Total player wins: " << playerWins << endl;
		cout << "Total computer wins: " << comWins << endl;
		cout << "\n\n\n";
	}

	if (pTotalRoll == 21)
	{
		system("CLS");
		cout << "You have blackjack, you win!!!\n\n\n";
		cTotalRoll = 0;
		pTotalRoll = 0;
		playerWins = playerWins + 1;
		cout << "Total player wins: " << playerWins << endl;
		cout << "Total computer wins: " << comWins << endl;
		cout << "\n\n\n";
	}

	if (pTotalRoll > 21) {
		system("CLS");
		cout << "You have busted, the comupter wins.\n\n\n";
		pTotalRoll = 0;
		cTotalRoll = 0;
		comWins = comWins + 1;
		cout << "Total player wins: " << playerWins << endl;
		cout << "Total computer wins: " << comWins << endl;
		cout << "\n\n\n";
	}

	if (cTotalRoll > 21) {
		system("CLS");
		cout << "The computer has busted, you win!\n\n\n";
		cTotalRoll = 0;
		pTotalRoll = 0;
		playerWins = playerWins + 1;
		cout << "Total player wins: " << playerWins << endl;
		cout << "Total computer wins: " << comWins << endl;
		cout << "\n\n\n";
		
	}

}

void Die::compareTotals() {

	if (pTotalRoll > cTotalRoll) {
		cout << "You win!\nYour total was "<<pTotalRoll <<"\nThe computers total was " << cTotalRoll;
		cout << "\n\n\n";
		playerWins = playerWins + 1;
		cout << "Total player wins: " << playerWins << endl;
		cout << "Total computer wins: " << comWins << endl;
		cout << "\n\n\n";
		cTotalRoll = 0;
		pTotalRoll = 0;
	}
	if (cTotalRoll > pTotalRoll) {
		cout << "You lose\nYour total was " << pTotalRoll << "\nThe computers total was " << cTotalRoll;
		comWins = comWins + 1;
		cout << "\n\n\n";
		cout << "Total player wins: " << playerWins << endl;
		cout << "Total computer wins: " << comWins << endl;
		cout << "\n\n\n";
		cTotalRoll = 0;
		pTotalRoll = 0;
	}
}