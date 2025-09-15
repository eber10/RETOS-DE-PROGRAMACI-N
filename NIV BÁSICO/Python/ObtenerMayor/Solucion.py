def PedirNum():
    print("------------------------------")
    print("Bienvenido Ingrese dos números")
    print("------------------------------")
    num1=float(input("Número 1:"))
    num2=float(input("Número 2:"))
    print("------------------------------")
    return num1,num2
def main():
    num1,num2=PedirNum()
    if num1!=num2:
        if num1>num2:
            print(num1)
        else:
            print(num2)
    else:
        print("Ambos son iguales")
main()