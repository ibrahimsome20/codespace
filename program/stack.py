while True:
    try:
    num1=int(input("enter first number"))
    num2=int(input("enter your second number"))
    if type(num1)== str or type(num2) == str:
          print("you must write number")
          exit()
    elif num1 >=0 and num2 >=0:
            break
    elif num1 <=0 and num2 <=0:
          break
          exit()
    except:


def sum_number(x,y):
    result=int(x)+int(y)
    return result

x=sum_number(num1,num2)
print(x*10)


