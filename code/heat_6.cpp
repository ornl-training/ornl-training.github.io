/*
 * heat_6.cpp
 *
 * Compute the temperature over the plane (x, y, 1) on a plate being arc welded
 * using the Rosenthal equation [1]. Output in plot file format. Reads minimum and
 * maximum x and y values from the command line.
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

class HeatTransfer {
	private:
		double T_0;
		double V;
		double I;
		double v;
		double a;
		double eta;
		double lambda;
		
	public:
		HeatTransfer(double T_0, double V, double I, double v, double a, double eta, double lambda) 
			: T_0(T_0), V(V), I(I), v(v), a(a), eta(eta), lambda(lambda) {}
		double ** calc_temperature(double x_min, double x_max, double y_min, double y_max, double step);
		
	private:
		double ** create_array(int nx, int ny);
};

double ** HeatTransfer::create_array(int nx, int ny) {
    double ** array = new double*[nx];
    
    for (int x = 0 ; x < nx; x++) {
        array[x] = new double[ny];
    }
    
    return array;
}

// x = y = z = 0 is undefined!
double ** HeatTransfer::calc_temperature(double x_min, double x_max, double y_min, double y_max, double step) {
	double x;
	double y;
	double R;

    double ** T = create_array((x_max - x_min) / step + 1, (y_max - y_min) / step + 1);
    
	double z = 1.0;

	int r = 0;
	for (x = x_min; x <= x_max; x += step) {
		int c = 0;
		for (y = y_min; y <= y_max; y += step) {
			R = sqrt(x*x + y*y + z*z);
			T[r][c] = T_0 + (eta * V * I) / (2 * pi * lambda) * (1 / R) * exp(-(v / (2 * a) * (R + x)));
			c++;
		}
		r++;
	}
	
	return T;
}

int main(int argc, char *argv[]) {
	double x_min;
	double x_max;
	double y_min;
	double y_max;
	double step = 1.0;
	double ** temp;
	
	if (argc < 5) {
		cerr << "usage: " << argv[0] << " x_min x_max y_min y_max" << endl;
		return 1;
	}
	
	x_min = atof(argv[1]);
	x_max = atof(argv[2]);
	y_min = atof(argv[3]);
	y_max = atof(argv[4]);
	
	HeatTransfer model(T_0, V, I, v, a, eta, lambda);
	
	int nx = (x_max - x_min) / step + 1;
	int ny = (y_max - y_min) / step + 1;

	cout << nx << " " << ny << " " << 0 << endl;
	
	temp = model.calc_temperature(x_min, x_max, y_min, y_max, step);
	
	int x = x_min;
	for (int r = 0; r < nx; r++) {
		int y = y_min;
		for (int c = 0; c < ny; c++) {
		    cout << x << " " << y << " " << temp[r][c] << endl;
		    y += step;
		}
		x += step;
	}
	
	return 0;
}
