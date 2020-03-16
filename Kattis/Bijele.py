a=list(map(int,input().split()))
b=[1,1,2,2,2,8]
c=[0,0,0,0,0,0]
for i in range(6):
   nr=0
   if a[i]<b[i]:
     while a[i]<b[i]:
       c[i]=nr+1
       nr=nr+1
       a[i]=a[i]+1
   if a[i]>b[i]:
     while a[i]>b[i]:
       c[i]=nr-1
       nr=nr-1
       a[i]=a[i]-1
for i in c:
    print(i,end=' ')
