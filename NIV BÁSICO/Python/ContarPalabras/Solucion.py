def ContarEspacios(frase):
    contador=0
    for c in frase:
        if c==' ':
            contador+=1
    return contador
def main():
    print("------------------------")
    frase=input("Ingrese una frase: ")
    print("-------------------------")
    print("Total de Palabras: ", ContarEspacios(frase)+1)
main()