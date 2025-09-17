#include<iostream>
#include<windows.h>
using namespace std;
int main(){
    SetConsoleOutputCP(CP_UTF8);
    int num;
    cout<<"-------------------\n";
    cout<<"Ingrese un número: "; cin>>num;
    cout<<"------------------\n";
    cout<<"Tabla de multiplicar de "<<num<<" :"<<endl;
    for(int i=1; i<=10; i++){
        cout<<num<<" X "<<i<<" = "<<num*i<<endl;
    }
    return 0;
}