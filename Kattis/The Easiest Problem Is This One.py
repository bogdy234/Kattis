def sumacif(x):
   sum=0
   while int(x):
     sum=sum+x%10
     x=x/10
   return int(sum)

n=int(input())
while n!=0:
   p=11
   while sumacif(n*p)!=sumacif(n):
    p=p+1
   print(p)
   n=int(input())