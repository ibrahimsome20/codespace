while True:
    num1=(input("enter first number"))
    num2=(input("enter your second number"))
    if num1 >=0 and num2 >=0:
        break

def sum_number(num1,num2):
    result=int(num1)+int(num2)
    return result

x=sum_number()
print(x*10)


