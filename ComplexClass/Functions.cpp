#include "Functions.h"
#include <cmath>

Complex RealSqrt(double num, bool pos) {
	if (num == 0)
		return Complex();
	else
		if (num > 0)
			return pos ? Complex(sqrt(num)) : -Complex(sqrt(num));
		else
			return pos ? Complex(0.0, sqrt(num)) : -Complex(0.0, sqrt(num));
}