def oglindit(x):
   y=0
   while int(x)!=0:
    y=int(y)*10+int(x)%10
    x=int(x)/10
   return y

x,y=map(int,input().split())
z=oglindit(x)
z1=oglindit(y)
if z>z1:
 print(z)
else:
 print(z1)
