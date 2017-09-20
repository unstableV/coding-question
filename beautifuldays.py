i=int(input())
j=int(input())
l=int(input())
c=0
for k in  range(i,j+1):
    r=0
    num=k
    while k>0:
        re=k%10
        r=(r*10)+re
        k=k//10
    if (num-r)%l==0:
        c=c+1
print(c)        
