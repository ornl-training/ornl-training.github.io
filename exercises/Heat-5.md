---
layout: exercise
title: Heat 5 - Using Classes
---

In order to make our `calc_temperature` function even more useful, we're going to turn our model into a class. To do this, we first define
a class called `HeatTransfer` that will provide a `calc_temperature` method. The constructor for the class will take the initial values of
the model constants so that different values can be tested easily. We'll also make the `create_array` function a private member as it's
only ever used by our method.

~~~
class HeatTransfer {
	private:
		double T_0;
		double V;
		double I;
		double v
		double a;
		double eta;
		double lambda;
		
	public:
		HeatTransfer(double T_0, double V, double I, double v, 
		  double a, double eta, double lambda)
			: T_0(T_0), V(V), I(I), v(v), a(a), eta(eta), 
			  lambda(lambda) {}
		double ** calc_temperature(double x_min, double x_max, 
		  double y_min, double y_max, double step);
		
	private:
		double ** create_array(int nx, int ny);
};
~~~
{: .code}

Modify the solution to [the previous exercise]({{ site.github.url }}/exercises/Heat-4) to add code for the `HeatTransfer::calc_temperature()` and `HeatTransfer::create_array()` methods. Then change the main program to use the class as follows:

~~~
int main() {
	.. ... ..
	HeatTransfer model(T_0, V, I, v, a, eta, lambda);
	.. ... ..
	temp = model.calc_temperature(x_min, x_max, y_min, y_max, step);
	.. ... ..
	// output the values of temp
}
~~~
{: .code}

A solution to this exercise is available [here]({{ site.github.url }}/code/heat_5.cpp).

