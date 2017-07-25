# Program to plot contours from a data file 
#
# The file consists of lines containing three values
# separated by spaces. The values are floating point
# numbers. The first line contains the number of values
# in the X dimension and the number of values in the Y
# dimension. The third value is always zero.
#

import numpy as np
import matplotlib.pyplot as plt

def contour_plot(filename):
    ''' Generate a contour plot from the given data file specified
        by the filename argument.
        Returns the figure and contour object
    '''
    x, y, z=np.loadtxt(filename, unpack=True)

    # Obtain the number of X and Y values
    nx = int(x[0])
    ny = int(y[0])

    # Remove the X and Y values from the dataset
    x = x[1:]
    y = y[1:]
    z = z[1:]

    # Reshape the data to be suitable for the contourf function
    X = x.reshape((nx,ny))
    Y = y.reshape((nx,ny))
    Z = z.reshape((nx,ny))

    # Create the figure
    plt.figure()

    return (plt, plt.contourf(X, Y, Z))

def add_features(fig, cp, title, xname, yname):
    ''' Add features to a contour plot.
        fig: figure
        cp: contour plot
        title: title to be added to plot
        xname: X axis label
        yname: Y axis label
    '''
    fig.clabel(cp, colors='k', inline=False, fontsize=10)
    fig.colorbar(cp)
    fig.title(title)
    fig.xlabel(xname)
    fig.ylabel(yname)

f, p = contour_plot('data_temp.txt')
add_features(f, p, 'Contour Plot', 'x', 'y')
f.show()
