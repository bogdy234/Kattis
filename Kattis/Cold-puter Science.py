n=int(input())
nr=0
a=list(map(int,input().split()))
for i in a[0:n]:
     if i<0:
      nr=nr+1
print(nr)