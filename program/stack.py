while True:
    num1=input("enter first number")
    num2=input("enter your second number")
     if type(num1)== <class 'str'> or type(num2) == <class 'str'>:
          print("you must write number")
      if num1 >=0 and num2 >=0:
            break

def sum_number(num1,num2):
    result=int(num1)+int(num2)
    return result

x=sum_number()
print(x*10)


