t=int(input())
nr=0
for i in range(t):
    n=int(input())
    c=[]
    for j in range(n):
        c.append(input())
    for k in range(n):
        for j in range(k+1,n):
         if (c[k]==c[j]):
          c[j]='\0'
    for j in range(n):
     if c[j]!='\0':
        nr=nr+1
    print(nr)
    nr=0