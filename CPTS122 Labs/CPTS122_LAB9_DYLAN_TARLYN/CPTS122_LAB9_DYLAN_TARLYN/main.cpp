#include <iostream>
#include <cstdlib>
#include <string>

using namespace std;

	class ship {
	protected:

		string name;
		string year;

	public:

		ship(string Name, string Year) { // constructor

			name = Name;
			year = Year;
		}

		string getName() const { // accessor for name
			return name;
		}

		string getYear() const { // accessor for year
			return year;
		}

		void setName() { // mutator for name

			string Name;

			cout << "Please enter ship name: ";
			cin >> Name;
			name = Name;
		}

		void setYear() {

			string Year;

			cout << "Please enter build year: ";
			cin >> Year;
			cout << "\n\n";
			year = Year;
		}

		virtual void print() {

			setName();
			setYear();

			cout << "Ship Name: " << getName() << endl;
			cout << "Year Built: " << getYear() << "\n\n";
		}
	};

	class cruiseShip : public ship {

	protected:

		int maxPass;

	public:

		cruiseShip(string name, string year, int MaxPass) : ship(name, year) {
			MaxPass = maxPass;
		}

		int getMax() {
			return maxPass;
		}

		void setMax() {

			int max;

			cout << "Please enter maximum number of passengers: ";
			cin >> max;
			cout << "\n\n";
			maxPass = max;
		}

		void print() {

			setName();
			setMax();

			cout << "Ship Name: " << getName() << endl;
			cout << "Maximum Passengers: " << getMax() << "\n\n";
		}

	};

	class cargoShip : public ship {

	protected:

		int tonnage;

	public:

		cargoShip(string name, string year, int Tonnage) : ship(name, year) {

			Tonnage = tonnage;
		}

		int getTonnage() {
			return tonnage;
		}

		void setTonnage() {
			int tons;

			cout << "Please enter the ships cargo capacity in tons: ";
			cin >> tons;
			cout << "\n\n";
			tonnage = tons;
		}

		void print() {

			setName();
			setTonnage();

			cout << "Ship Name: " << getName() << endl;
			cout << "Maximum Tonnage: " << getTonnage() << endl;
		}

	};


	int main() {

		ship Ship(" ", " ");
		cruiseShip cruise(" ", " ", 0);
		cargoShip cargo(" ", " ", 0);


		ship* ships[3] = { &Ship, &cruise, &cargo };

		for (int i = 0; i < 3;i++) {
			ships[i]->print();
		}


		return 0;
	}