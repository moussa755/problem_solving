k,s=map(int,input().split())
count=0
for x in range(k):
    for y in range(k):
        z = s - x - y
        if 0 <= z <= k :
         count=+1
print(count)

