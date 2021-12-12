#include <iostream>
#include <iomanip>
#include <cmath>
#include <limits>

using namespace std;

int colorCalc(float red, float green, float blue, float multi) {
	float red_format;
	float green_format;
	float blue_format;

	red_format = (red * multi) / 100;
	green_format = (green * multi) / 100;
	blue_format = (blue * multi) / 100;
	
	cout << endl << "Values for ImVec4 :" << '\n';
	std::cout << "ImVec4(" << std::setprecision(2) << red_format << "f, " << std::setprecision(2) << green_format << "f, " << std::setprecision(2) << blue_format << "f, 1.00f);" << '\n';

	return 1;
}

int main() {
	float mult = 0.392156862745098;
	float red;
	float green;
	float blue;
	char choose;

	do {
		cout << "Enter the values for red : ";
		cin >> red;
		if (red < 0 || red > 255) {
			cout << "Value not valid.";
			break;
		}
		cout << "Enter the values for green : ";
		cin >> green;
		if (green < 0 || green > 255) {
			cout << "Value not valid.";
			break;
		}
		cout << "Enter the values for blue : ";
		cin >> blue;
		if (blue < 0 || blue > 255) {
			cout << "Value not valid.";
			break;
		}
		colorCalc(red, green, blue, mult);

		cout << endl << "Retry ? [ Y / N ] : ";
		cin >> choose;
	} while (choose == 'y' || choose == 'Y');

	return EXIT_SUCCESS;
}