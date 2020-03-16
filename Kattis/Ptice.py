def maxim(x,y,z):
    if x>=y and x>=z:
        return x
    if y>=z and y>=x:
        return y
    if z>=x and z>=y:
        return z

n=int(input())
a=input()
v=['A','B','C']
v1=['B','A','B','C']
v2=['C','C','A','A','B','B']
while n>len(v):
  v=v*2
while n>len(v1):
  v1=v1*2
while n>len(v2):
  v2=v2*2
nr=0
nr1=0
nr2=0
for i in range(len(a)):
    if a[i]==v[i]:
        nr=nr+1
    if a[i]==v1[i]:
        nr1=nr1+1
    if a[i]==v2[i]:
        nr2=nr2+1
max=maxim(nr,nr1,nr2)
print(max)
if nr==max:
    print("Adrian")
if nr1==max:
    print("Bruno")
if nr2==max:
    print("Goran")