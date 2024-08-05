/*Escribe un programa en C++ que tenga una función llamada marcarAsiento que
tome un puntero a un booleano y lo cambie a true para indicar que el asiento está
reservado. Luego, en la función main, crea un arreglo que represente los asientos
del teatro (inicialmente todos libres), pide al usuario que elija un asiento para
reservar, llama a la función marcarAsiento y muestra el estado de los asientos antes
y después de la reserva.*/

#include <iostream>
using namespace std;
void marcarAsiento(bool *a);

int main() {
    const int n=10;
    bool asientos[n]={false};
    int asientoElegido;

    cout << "Estado inicial de los asientos:\n";
    for (int i = 0; i <n; ++i) {
        cout << "Asiento " << i + 1 << ": " << (asientos[i] ? "Reservado" : "Libre") << "\n";
    }
    cout << "Elija un asiento para reservar (1-" << n << "): ";
    cin >> asientoElegido;
    marcarAsiento(&asientos[asientoElegido - 1]);

    cout << "Estado de los asientos después de la reserva:\n";
    for (int i = 0; i < n; ++i) {
        cout << "Asiento " << i + 1 << ": " << (asientos[i] ? "Reservado" : "Libre") << "\n";
    }

    return 0;
}
void marcarAsiento(bool *a){
    *a=true;
}