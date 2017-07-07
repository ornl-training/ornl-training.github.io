---
layout: exercise
title: Plotting 1 - Contour plotting
---

In the first lesson, we saw how to load a CSV file using the NumPy `loadtxt` function. 
We're going to use this function again, but this time to load temperature data and 
create a contour plot.

Download the [data_temp.txt]({{ site.github.url }}/data/data_temp.txt) data file and
put in a known location (you might need to right-click on the link). 

Each line of the file consists of a triple (`x`, `y`, `t`) where
(`x`,`y`) are coordinates on a 2-D grid, and `t` is the temperature value at that point.
The first line of the file is special, it contains three values: the number of points in the
X direction, `NX`, the number of points in the Y direction, `NY`, and a value that is always 0.
You can assume that the `x` and `y` values are evenly spaced and there are no gaps in the data.

You can use the `loadtxt` function to load the entire file into a NumPy array, however you'll
need to remove (and save) the `NX`, `NY`, and 0 values from the array before you plot it. You can
find documentation on using `loadtxt` [here](https://docs.scipy.org/doc/numpy/reference/generated/numpy.loadtxt.html).

Once you have the data loaded, you can plot it using the matplotlib `contourf` function (note the `f` at the end
of the function for plotting "filled" contours). Documentation for `contourf` is 
[here](https://matplotlib.org/api/_as_gen/matplotlib.axes.Axes.contourf.html). 

Unfortunately, the `controurf` function requires the data in a different format than the `loadtxt` function will
provide *by default*. It needs three arguments: a 2-D array of X coordinates, a 2-D array of Y coordinates, and a 2-D
array of the temperature values. So, for example, if the data file contained:

```
3 3 0
0 0 4
0 1 5
0 2 6
1 0 7
1 1 8
1 2 9
2 0 10
2 1 11
2 2 12
```

The first argument to `contourf` would need to be `[[0, 0, 0], [1, 1, 1], [2, 2, 2]]`, the second argument
would need to be `[[0, 1, 2], [0, 1, 2], [0, 1, 2]]` and the third argument `[[4, 5, 6], [7, 8, 9], [10, 11, 12]]`.

Your job is to write a Python program that will product a filled contour plot of the data file. An outline of the
program will look something like this:

```
import numpy as np
import matplotlib.pyplot as plt
 
...something... = np.loadtxt('data_temp.txt', ...some arguments...)
NX = ...extract value...
NY = ...extract value...
X = ...extract values...
Y = ...extract values...
T = ...extract values...
 
plt.figure()
cp = plt.contourf(X, Y, T)
plt.show()
 ```


