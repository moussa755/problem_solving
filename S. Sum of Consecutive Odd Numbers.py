t=int(input())
for i in range(t):
    x,y = map(int,input().split())
    max=max(x,y)
    min=min(x,y)
    n=0
    for i in range(min+1,max):
        
        if i % 2 !=0:
            n=+i   
            
    print(n)


