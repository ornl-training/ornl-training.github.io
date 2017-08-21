/*
 * heat_3.cpp
 *
 * Compute the temperature over the plane (x, y, 1) on a plate being arc welded
 * using the Rosenthal equation [1]. Output in plot file format.
 *
 *  Created on: Aug 15, 2017
 *      Author: gw6
 *
 * [1] D. Rosenthal, Mathematical Theory of Heat Distribution during Welding and Cutting,
 *     Weld. J., Vol 20, 1941, p 220s–234s
 */

#include <iostream>
#include <cmath>

using namespace std;

const double T_0 = 200.0; 	// preheat temperature
const double V = 20.0; 		// voltage
const double I = 200.0; 		// current
const double v = 5;			// welding speed
const double a = 84.18;		// thermal diffusivity
const double eta = 0.84;		// arc efficiency
const double lambda = 204.2; // thermal conductivity

const double pi = 3.1415926535897;

// x = y = z = 0 is undefined!
void calc_temperature(double x_min, double x_max, double y_min, double y_max, double step) {
	double x;
	double y;
	double R;
	double T;

	double z = 1.0;

	for (x = x_min; x <= x_max; x += step) {
		for (y = y_min; y <= y_max; y += step) {
			R = sqrt(x*x + y*y + z*z);

			T = T_0 + (eta * V * I) / (2 * pi * lambda) * (1 / R) * exp(-(v / (2 * a) * (R + x)));

			cout << x << " " << y << " " << T << endl;
		}
	}
}

int main() {
	double x_min = -30;
	double x_max = 10;
	double y_min = -20;
	double y_max = 20;
	double step = 1.0;

	cout << (x_max - x_min) / step + 1 << " " << (y_max - y_min) / step + 1 << " " << 0 << endl;
	calc_temperature(x_min, x_max, y_min, y_max, step);
	return 0;
}
