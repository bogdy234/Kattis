n=int(input())
a=[0 for i in range(n)]
b=[0 for i in range(n)]
sum=0
while(n!=-1):
 a=[0 for i in range(n)]
 b=[0 for i in range(n)]
 for i in range(n):
     c,d=map(int,input().split())
     a[i]=c
     b[i]=d
 for i in range(n):
     for j in range(i):
        b[i]=b[i]-b[j]
 print(b)
 for i in range(n):
     sum=sum+a[i]*b[i]
 print(str(sum) + ' miles')
 n=int(input())
 sum=0