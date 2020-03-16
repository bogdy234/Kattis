a,b=map(int,input().split())
if b>45:
 b=b-45
else:
 mem=b
 b=60-(45-mem)
 if a==0:
    a=23
 else:
    a=a-1
print(a,b,end='')