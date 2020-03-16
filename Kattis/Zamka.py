def sumcif(x):
    sum=0
    while int(x):
     sum=int(sum)+x%10
     x=int(x)/10
    return int(sum)

n=0
m=0
l=int(input())
d=int(input())
x=int(input())

for i in range(l,d+1):
  if sumcif(i)==x:
      n=i
      break
for i in range(l,d+1):
  if sumcif(i)==x:
      m=i

print(n,m)