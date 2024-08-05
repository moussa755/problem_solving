
n=int(input())
if n<=1:
    print("NO")
elif n==2:
    print("YES")
else:
    y=0
    for i in range(2,n-1):

        if n%i==0 :
            y=1
            break
    if y==1:
        print('NO')
    elif y==0:
        print('YES')

    
# import math

# n = int(input())

# if n <= 1:
#     print('NO')
# elif n == 2:
#     print('YES')
# else:
#     y = 0
#     for i in range(2, int(math.sqrt(n)) + 1):
#         if n % i == 0:
#             y = 1
#             break
#     if y == 1:
#         print('NO')
#     else:
#         print('YES')
