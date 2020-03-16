x=1
while True:
     try:
       x,y= [int(e) for e in input().split()]
       if x>y:
         rez=x-y
       else:
         rez=y-x
       print(rez)
     except EOFError:
      break