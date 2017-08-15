---
layout: exercise
title: Heat 1 - Heat Transfer Model
---

In this exercise, we will develop an algorithm for computing the temperature at a particular location on a plate being welded using the Rosenthal equation[^1]. We can just work in two dimensions, so assume $$ z = 0 $$.

First, given a point $$ (x, y) $$, calculate the radial distance $$ R = \sqrt{x^2 + y^2} $$.

Next, using the values of $$ x $$, $$ R $$, $$ T_0 $$, $$ V $$, $$ I $$, $$ v $$, $$ a $$, and $$ \eta $$, calculate $$ T\{x,R\} $$ using the 
equation:

$$
T\{x,R\} = T_0 + \frac{\eta V I}{2 \pi \lambda}\left ( \frac{1}{R} \right ) \mathrm{exp}\left \{ - \frac{v}{2 a} (R + x)\right \};
$$

You will need to declare variables for each of the values above. Choose a data type you think is most appropriate for this problem. Place the code 
in a `main` function and print out the value of $$ T\{x,R\} $$. 

Use the following initial values $$ T_0 = 200.0 $$, $$ V = 20.0 $$, $$ I = 200.0 $$, $$ v = 5 $$, $$ a = 84.18 $$, $$ \eta = 0.84 $$, $$ \lambda = 204.2 $$.

Experiment with using different values of $$ x $$ and $$ y $$ and see what results you obtain.

[^1]: D. Rosenthal, Mathematical Theory of Heat Distribution during Welding and Cutting, Weld. J., Vol 20, 1941, p 220s–234s

A solution to this exercise is available [here]({{ site.github.url }}/code/heat_1.cpp).

