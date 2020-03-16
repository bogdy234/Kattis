a=[]
b=['A',2,3,4,5,6,7,8,9,'T','J','Q','K']
c=[0,0,0,0,0,0,0,0,0,0,0,0,0]
a.append(input().split())
for i in range(len(a)):
    for j in range(len(b)):
        if a[0][i][0]==b[j]:
         c[i]=c[i]+1
max=-1
for i in c:
    if i>max:
     max=i
print(max)