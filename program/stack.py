while True:
    try:
        num1=float(input("enter first number: "))
        num2=float(input("enter your second number: "))
        if num1 >=0 and num2 >=0:
             break
        elif num1 <=0 and num2 <=0:
            print("you must enter number positive number")
    except:
        print("enter number only")


def sum_number(x,y):
    result=int(x)+int(y)
    return result

x=sum_number(num1,num2)
print(x*10)


