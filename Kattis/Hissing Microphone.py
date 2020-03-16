a=input()
ok=0
for i in range(len(a)-1):
        if a[i]==a[i+1] and a[i]=='s':
          ok=1
          break
if ok==1:
    print("hiss")
else:
    print("no hiss")