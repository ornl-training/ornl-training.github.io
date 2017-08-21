---
layout: exercise
title: Heat 3 - Using Arrays
---

Rather than having the `calc_temperature` function print out the values for the temperatures, it would be more useful if it calculated the values
and returned the values from the function. Since we're working with a 2-D model, the most appropriate data type would be a 2-dimensional array of
doubles. It is not quite as easy to declare a 2-D array in C++ as some other languages, so here is some code to help you do it:

~~~
double ** create_array(int nx, int ny) {
    double ** array = new double*[nx];
    
    for (int x = 0 ; x < nx; x++) {
        array[x] = new double[ny];
    }
    
    return array;
}
~~~
{: .code}

where `nx` and `ny` are the dimensions of the array. Note that the array type is `double **` rather than `double [nx][ny]` as you would expect. This
is C++'s way of declaring an array of unknown size.

We can use this function to dynamically allocate an array as follows:

~~~
double ** calc_temperature(double x_min, double x_max, double y_min, double y_max, double step) {
    .. ... ..
    // calculate nx and ny
    .. ... ..
    double ** T = create_array(nx, ny);
    .. ... ..
    // calculate the values of T
    .. ... ..
    return T;
}
~~~
{: .code}

One other thing to note is that the equation uses `x` and `y` values that range from negative to positive, and are used in `step` increments. 

*C++ arrays can't have negative indices!* In order to use them, you will need to keep counters for both the array coordinates and the equation
coordinates.

Modify the solution to [the previous exercise]({{ site.github.url }}/exercises/Heat-3) so that the `calc_temperature` function returns an array
with the temperature values. Call this function from the main program, then print out the values of the array in the same manner as before.

A solution to this exercise is available [here]({{ site.github.url }}/code/heat_4.cpp).

