#include<iostream>
#include<string>
using namespace std;
int ContarEspacios(string frase){
    int contador=0;
    for(char c:frase){
        if(c==' '){
            contador++;
        }
    }
    return contador;
}
int main(){
    string frase;
    cout<<"-----------------------------------------\n";
    cout<<"Ingrese una frase: "; getline(cin,frase);
    cout<<"-----------------------------------------\n";
    cout<<"Total de Palabras: "<<ContarEspacios(frase)+1;
    return 0;
}