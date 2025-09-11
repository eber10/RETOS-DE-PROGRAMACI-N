#include<iostream>//librería para trabajar con flujos de entrada y salida(Input-Output).
#include<windows.h>//Librería que se va a utilizar para configrar la consola y asi permitir usar caracteres especiales.
using namespace std;//se utiliza para evitar utilizar el prefijo std::
void PedirNum(double &Num1, double &Num2){//Función que no retorna nada, esta función resive dos valores por referencia, para actualizar los valores de las variables.
    cout<<"------------------------------\n";
    cout<<"Bienvenido Ingrese dos números\n";
    cout<<"------------------------------\n";
    cout<<"Número 1:"; cin>>Num1;
    cout<<"Número 2:"; cin>>Num2;

}
int main(){
    SetConsoleOutputCP(CP_UTF8);//configura la consola para mostrar caracteres especiales.
    double Num1, Num2;
    PedirNum(Num1,Num2);
    if(Num1!=Num2){
        if(Num1>Num2){
            cout<<Num1<<endl;
        }else{
            cout<<Num2<<endl;
        }
    }else{
        cout<<"Ambos son iguales\n";
    }

    return 0;
}