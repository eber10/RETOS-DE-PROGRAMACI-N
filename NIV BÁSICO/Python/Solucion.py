def pedirNum(): #función para pedir número.
    print("------------------------------")
    print("Bienvenido Ingrese dos números")
    print("------------------------------")
    num1=float(input("Número 1:"))
    num2=float(input("Número 2:"))
    return num1,num2
def main(): #función para ejecutar la función principal.
    num1, num2=pedirNum()
    if num1!=num2:
        if num1>num2:
            print(num1)
        else:
            print(num2)
    else:
        print("Ambos son iguales")
main()#ejecutar función principal.