---
layout: exercise
title: Heat 1 - Heat Transfer Model
---

In this exercise, we will develop an algorithm for computing the temperature at a particular location on a plate being welded using the Rosenthal equation[^1]. We can just work in two dimensions, so assume $$ z = 0 $$.

First, given a point $$ (x, y) $$, calculate the radial distance $$ R = sqrt{x^2 + y^2} $$.

Next, using the values of $$ x $$, $$ R $$, $$ T_0 $$, $$ V $$, $$ I $$, $$ v $$, $$ a $$, and $$ \eta $$, calculate $$ T\{x,R\} $$ using the 
equation.

You will need to declare variables for each of the values above. Choose a data type you think is most appropriate for this problem. Place the code 
in a `main` function and print out the value of $$ T\{x,R\} $$. 

Use the following initial values:

$$ T_0 = $$

$$ V = $$

$$ I = $$

$$ v = $$

$$ a = $$

$$ \eta = $$

Experiment with using different values of $$ x $$ and $$ y $$ and see what results you obtain.