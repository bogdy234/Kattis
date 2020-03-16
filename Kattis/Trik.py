a=input()
left=1
middle=0
right=0
for i in a:
   if i=='A':
     aux=left
     left=middle
     middle=aux
   elif i=='B':
     aux=middle
     middle=right
     right=aux
   elif i=='C':
     aux=right
     right=left
     left=aux
if left==1:
 print("1")
elif middle==1:
 print("2")
elif right==1:
 print("3")