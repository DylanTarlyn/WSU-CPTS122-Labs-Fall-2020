#pragma once
using namespace std;

#include <ctime>
#include <iostream>

class Die
{

	private:

		int Die1;
		int Die2;
		int pTotalRoll = 0;
		int cTotalRoll = 0;
		int playerWins = 0;
		int comWins = 0;

	public:
		Die(); // constructor to initialize die value
		void roll(); // assigns a value to a die
		int getValue(); // accesses the value of a die
		void compareTotals();
};

