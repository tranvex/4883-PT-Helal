## 920 - Sunny Mountains
### Yoseph Helal
### Presentation:

Sunny Mountains presents us with an intriguing problem. You are given a set of coordinates that when all of them are plotted together form a sort of mountain range. Obviously, since this is a mountain range with varying peaks and altitudes, the sun is bound to hit some areas, and others not so much. Now, imagine this on a 2d plane where a y-axis from the right side is emanating continuous sun beams and our peaks are plotted. In the diagram on the PDF, we can clearly see how this plays out. With the areas, the sun hits, highlighted in red. Our goal is given our input data to plot the coordinates, figure out the coordinates, connect them, so that we can form our range, figure out which peaks are sunny (from right to left) and lastly use the distance formula to help us calculate the total distance of the sides of mountains that are sunny.

### Starter Code
#### This code will help us calculate the point of intersection for two lines given two points that exist on each of the two lines.
```py
# 0 500
# 400 1100
# 600 600
# 1100 1200
# 1400 100
# 1500 800
# 1700 600
# 1800 700
# 2100 300
# 2400 500
# 2800 0


#line_intersection(((0.5, 0.5), (1.5, 0.5)), ((1, 0), (1, 2)))

def line_intersection(line1, line2):
    xdiff = (line1[0][0] - line1[1][0], line2[0][0] - line2[1][0])
    ydiff = (line1[0][1] - line1[1][1], line2[0][1] - line2[1][1])

    def det(a, b):
        return a[0] * b[1] - a[1] * b[0]

    div = det(xdiff, ydiff)
    if div == 0:
       raise Exception('lines do not intersect')

    d = (det(*line1), det(*line2))
    x = det(d, xdiff) / div
    y = det(d, ydiff) / div
    return x, y


if __name__=='__main__':
    x = line_inxtersection(((2400, 500), (2399, 500)),((1800,700),(2100,300)))
    print(x)
```