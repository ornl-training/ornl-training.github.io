---
layout: exercise
title: Heat 6 - Command Line Arguments
---

Finally, we want to turn our program into something we can use to experiment with heat transfer models, by generating different data sets
and visualizing the output. To do this, we are going to read the minimum and maximum $$ x $$ and $$ y $$ values from the command line,
then couple the output with our plotting program.

Modify the solution to [the previous exercise]({{ site.github.url }}/exercises/Heat-5) so that it takes four arguments, `x_min`, `x_max`, 
`y_min`, and `y_max` from the command line and uses these instead of the constants in the current program. You will need to check the number
of arguments passed, as well as convert them to `double`.

A solution to this exercise is available [here]({{ site.github.url }}/code/heat_6.cpp).

Once you have completed this, try redirecting the output into a file, then plotting the result using the 
[`plot_func.py`]({{ site.github.url }}/code/plot_func.py) program we wrote previously:

~~~
./heat -30 10 -20 20 > heat.out
python plot_func heat.out
~~~
{: .bash}

