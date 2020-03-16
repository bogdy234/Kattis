max=-1
sum=0
nr=1
for i in range(5):
 a,b,c,d=map(int,input().split())
 sum=sum+a+b+c+d
 if sum>max:
    max=sum
    j=nr
 sum=0
 nr=nr+1

print(j,max,end='')