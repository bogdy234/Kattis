c=float(input())
L=int(input())
sum=0
for i in range(L):
  w, l = map(float, input().split())
  sum=sum+w*l
rez=sum*c
print(round(rez,8))
