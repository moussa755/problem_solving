import math as m
N=int(input())
out=m.log(N,2)
if out.is_integer():
     print('YES')
else:
      print('NO')

#another solution
# n = int(input())

# if (n > 0) and (n & (n - 1)) == 0:
#     print('YES')
# else:
#     print('NO')
