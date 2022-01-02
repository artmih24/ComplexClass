#include "Functions.h"
#include <cmath>

Complex Sqrt(double num, bool pos = true) {
	if (num == 0)
		return Complex(0, 0);
	else
		if (num > 0)
			return pos ? Complex(sqrt(num), 0) : Complex(-sqrt(num), 0);
		else
			return pos ? Complex(0, sqrt(num)) : Complex(0, -sqrt(num));
}