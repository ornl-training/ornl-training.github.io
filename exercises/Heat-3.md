---
layout: exercise
title: Heat 2 - 2-D Heat Transfer Model Function
---

In the [the previous exercise]({{ site.github.url }}/exercises/Heat-2), you developed an algorithm for computing the temperature over a grid
of $$ x $$ and $$ y $$ values. Now we would like to modify it so that we can experiment with different grids sizes and spacings. 

Using your knowledge of functions in C++, modify the program so that the algorithm code is moved into a function called `calc_temperature` that 
takes as arguments a minimum and maximum values for $$ x $$ and $$ y $$ as well as a grid spacing value. 

The program should then output the following:

1. A single line containing the number of $$ x $$ values, the number of $$ y $$ values, and a 0 separated by spaces.
2. For each element in the grid of $$ x, y $$ values, a line containing the corresponding $$ x $$ value, $$ y $$ value, and temperature, separated by spaces.

<!-- A solution to this exercise is available [here]({{ site.github.url }}/code/heat_3.cpp).-->

