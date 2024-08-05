/*Crear un programa con un menú de opciones visible por terminal, que tenga los
métodos sumarEnteros, calcularAreaCirculo y calcular la potencia de un número. El
menú deberá solicitar los parámetros al usuario de acuerdo a la opción
seleccionada.*/

#include <iostream>
#include <cmath>
using namespace std;

int sumarEnteros(int a, int b);
float calcularAreaCirculo(float a);
float calcularPotencia(float base, int exponente);

int main(){
    int a, b, e, n;
    float c,d;
    cout<<"Ingrese una op: \n";
    cin>>n;
    switch (n){
    case 1:

        sumarEnteros(a,b);
        break;
    
    case 2:
        calcularAreaCirculo(c);
        break;
    
    case 3:
        calcularPotencia(d,e);
        break;
    
    default:
        break;
    }
    return 0;
}

int sumarEnteros(int a, int b){
    int s;
    s=a+b;
    return s;
}

float calcularAreaCirculo(float a){
    float area;
    const double p= 3.14159265359;
    area= p*a*a;
    return area;
}

float calcularPotencia(float base, int exponente) {
    return pow(base, exponente);
}