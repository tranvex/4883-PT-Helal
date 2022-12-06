## 920 - Sunny Mountains
### Yoseph Helal
### Presentation:

### Starter Code
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