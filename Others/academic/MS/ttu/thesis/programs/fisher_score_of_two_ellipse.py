from numpy import *
from matplotlib.pyplot import *

NUM_OF_POINTS = 360


def draw_ellipse(shift_up):
    global NUM_OF_POINTS
    t = linspace(0, NUM_OF_POINTS, NUM_OF_POINTS)
    x = 50 * cos(radians(t))
    y = 10 * sin(radians(t)) + shift_up
    plot(x, y)
    return x, y


"""
F = Ej,k(Pj(uj-u)^2)/Ej,k(Pj * oj^2)
uj = mean of data points belonging to class j 
oj = standard deviation of data points belonging to class j 
pj = fractions of data points belonging to class j
u = global mean of data on the feature being evaluated 
"""


def calculate_fisher(u, j):
    uj = mean(j)
    oj = std(j)
    num_j = 0
    denom_j = 0
    for pj in j:
        num_j = num_j + pj * pow((uj - u), 2)
        denom_j = denom_j + pj * pow(oj, 2)
    fj = num_j / denom_j
    return fj


def fisher(x, y):
    u = mean(x + y)
    return calculate_fisher(u, x), calculate_fisher(u, y)


if __name__ == '__main__':
    ellipse1, ellipse2 = draw_ellipse(0), draw_ellipse(50)
    fx, fy = fisher(ellipse1[0] + ellipse2[0], ellipse1[1] + ellipse2[1])
    print("fx: ", fx)
    print("fy: ", fy)
    show()
