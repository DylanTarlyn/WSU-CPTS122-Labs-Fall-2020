#include "Complex.h"

Complex::Complex(double real, double imaginary)
{
	set(real, imaginary);
}

Complex Complex::add(const Complex& rhs)
{
	return Complex(realPart + rhs.realPart, imaginaryPart + rhs.imaginaryPart);
}