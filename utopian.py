n=int(input())
h=1
for i in range(0,n):
    h=1
    e=int(input())
    
    for j in range(1,e):
        if j%2==0:
            h=h+1
        if j%2!=0:
            h=h*2
    if e!=0:
        print(h+1)
    else:
        print(h)        
