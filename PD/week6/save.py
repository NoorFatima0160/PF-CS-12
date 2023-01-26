for x range (10): (for many outputs)
check ==0;
num = int(input("enter number :"))
for i in range(2,num):
    if(num %i==0):
        check =1
        break
    if(check ==1):
        print ("number is prime")
      else
        print ("number is not prime")
        output = 1