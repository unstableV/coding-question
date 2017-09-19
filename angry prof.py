n=int(input())

for i in range(0,n):
    l=[]
    c1=0
    n1=int(input())
    k=int(input())
    for j in range(0,n1):
        e=int(input())
        l.append(e)
        
    for j in range(0,n1):
        if l[j]<=0:
            c1=c1+1
    if c1<k:
        print("yes")
    else:
        print("no")
