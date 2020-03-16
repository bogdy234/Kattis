n=int(input())
for i in range(n):
    a=int(input())
    x=[]
    x.append(input().split())
    nr=0
    for i in range(len(x)):
     for j in range(i+1,len(x)):
         if x[i]==x[j]:
             x[i]=-100
             x[j]=-200
    for i in range(len(x)):
        if x[i]>0:
         print(i+1)