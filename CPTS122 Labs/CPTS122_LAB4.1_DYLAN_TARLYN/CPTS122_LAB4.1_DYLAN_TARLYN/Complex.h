#pragma once
#ifndef COMPLEX_H
#define COMLPEX_H
#define _CRT_SECURE_NO_WARNINGS

class Complex
{
public:
	Complex(double, double);
	Complex add(const Complex&);
	Complex subtract(const Complex&);
	void print();
	void set(double, double);
private:
	double realPart;
	double imaginaryPart;
};

#endif