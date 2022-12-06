import sys

t = int(input())

while t:
  m, n = list(map(int, input().split()))
  
  
  n = int(n)
  m = int(m)
  
  mm = m % 3
  nn = n % 3
  
  
  print(int(((n-nn) * (m-mm))/9))
  t -= 1



# 55746
# 788977
# 2671704
# 12

# 142324
# 61888631
# 107864194
# 98
# 60060
# 77