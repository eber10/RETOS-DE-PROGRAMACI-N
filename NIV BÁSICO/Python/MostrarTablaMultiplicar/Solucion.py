def main():
    num=int(input("Ingres un número:  "))
    print("----------------------------")
    print("Tabla de multiplicar de ",num," :")
    for i in range(1, 11, 1):
        print(num," X ",i," = ",num*i)
main()