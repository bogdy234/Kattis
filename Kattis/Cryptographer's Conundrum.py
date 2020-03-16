a=input()
b=int(len(a)/3)
c="PER"*b
nr=0
for i in range(len(a)):
    if c[i]!=a[i] :
        nr=nr+1
print(nr)