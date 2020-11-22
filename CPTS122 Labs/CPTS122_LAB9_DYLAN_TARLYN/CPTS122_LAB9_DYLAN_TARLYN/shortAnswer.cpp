
/*
* 
* 
1. What base class is named in the line below ? What derived class is named in the
line below ?

class Pet :public Dog

Base Class: Dog

Derived Class: Pet



2. Protected members of a base class are like private members, except they
may be accessed by derived classes.



	3. Find the errors :

a. class Tank : public Cylinder {
private:
	int fuelType;
	double gallons;
public:
	Tank();
	~Tank();
	void setContents(double);
	void setContents(double);
};

Should be:
class Cylinder{

};


class Tank : public Cylinder {
private:
	int fuelType;
	double gallons;
public:
	Tank() : Cyinder(){};
	~Tank();
	void setContents(int);
	void setContents(double);
};


b. class Car, public Vehicle {
public:
	Car();
	~Car();
protected:
	int passengers;
}

Should be:

class Vehicle{

};

class Car: public Vehicle {
public:
	Car() : Vehicle(){};
	~Car();
protected:
	int passengers;
};

*/