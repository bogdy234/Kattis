x=[]
y=[]
j=1
valx=-1
valy=-2
for i in range(3):
 a,b=map(int,input().split())
 x.append(a)
 y.append(b)
 j=j+1
ok=1
for i in x(0,3):
    ok=1
    for j in x(i+1,4):
        if i==j:
         ok=0
    if ok==1:
      valx=i
      break
ok=1
for i in y(0,3):
    ok=1
    for j in y(i+1,4):
        if i==j:
            ok=0
    if ok==1:
         valy=i
         break
print(valx,valy)