a=input()
nr=0
nr1=0
nr2=0
nr3=0

for i in a:
    if i=='_':
        nr=nr+1
    elif i>='a' and i<='z':
        nr1=nr1+1
    elif i>='A' and i<='Z':
        nr2=nr2+1
    else:
        nr3=nr3+1
print(nr/len(a),nr1/len(a),nr2/len(a),nr3/len(a))