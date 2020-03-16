def minim(x,y,z):
 if x<=y and x<=z:
  return x
 if y<=z and y<=x:
  return y
 if z<=y and z<=x:
  return z

a=input()
nr1=0
nr2=0
nr3=0
for i in a:
  if i=='T':
   nr1=nr1+1
  elif i=='C':
   nr2=nr2+1
  elif i=='G':
   nr3=nr3+1
sum=0
if nr1!=0:
 sum=sum+nr1*nr1
if nr2!=0:
 sum=sum+nr2*nr2
if nr3!=0:
 sum=sum+nr3*nr3
min=minim(nr1,nr2,nr3)
if min>0:
 sum=sum+7*min
print(sum)
