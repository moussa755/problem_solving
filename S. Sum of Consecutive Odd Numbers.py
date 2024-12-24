num =int(input())

for i in range(num):
    x,y=map(int,input().split())
    if x > y :
        x, y =y, x
    sum_odd=sum(n for n in range(x+1,y) if n%2!=0)
    print(sum_odd)
    