#define _CRT_SECURE_NO_WARNINGS

/* 1.1

int g(void)
{
	printf("Inside function g\n");

	int h(void)
	{
		printf("Inside function h\n");
	}
}

Need to move the definition outside of the function

/* 1.2

int sum(int n)
{
	if (n == 0)
	{
		return 0;
	}
	else {
		n + sum(n - 1);
	}
}

doesn't return anything in the else statement

*/


/* 1.3

a) Don't need a semicolon at the end

b) Need to declare a type i.e. int

c) Curly brackets around the 0 in declaring b

d) Doesn't need a semicolon at the end

e) Initialized array wrong


*/

// PROBLEM 2

/* 

struct customer {
char lastName[15];
char firstName[15];
int customerNumber;

struct {
char phoneNumber[11];
char address[50];
char city[15];
char state[3];
char zipCode[6];
} personal;
} customerRecord, ∗customerPtr;
customerPtr = &customerRecord;

*/

/*
write an expression that can be used to access the structure members in each of the following parts:

customerRecord.lastName
customerPtr->lastName
CustomerRecord.firstName
customerPtr->firstName
customerRecord.customerNumber
customerPtr->customerNumber
customerRecord.personal.phoneNumber
customerPtr->phoneNumber
customerRecord.personal.address
customerPtr.personal->address
customerRecord.personal.city
customerPtr.personal->city
customerRecord.personal.state
customerPtr.personal->state
customerRecord.personal.zipCode
customerPtr.personal->zipCode

*/

// PROBLEM 3

//void exchange(double* x, double* y);
//
//void exchange(double *x, double *y)
//{
//	double z = 0.0;
//	z = *x;
//	*x = *y;
//	*y = z;
//}

