#include "lab13.2(2).h"

int main() {
	std::cout << "DATE: " << __DATE__ << std::endl;
	std::cout << "FILE: " << __FILE__ << std::endl;
	std::cout << "LINE: " << __LINE__ << std::endl;
	// macro __STDC__ is not defined
	// std::cout << "STDC: " << __STDC__ << std::endl;
	std::cout << "TIME: " << __TIME__ << std::endl;

	double z = Divide(5., 0.);
	return 0;
}

double Divide(double x, double y) {
	if (y == 0) {
		std::cout << "Division by 0 in " << __FILE__ << " line: " << __LINE__ << std::endl;
		return NAN;
	}
	return x / y;
}