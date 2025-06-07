//Pide un número y muestra los primeros N números primos

#include <iostream>
using namespace std;

int main() {
    int N;
    cout << "Introduzca la cantidad de numeros primos que desea ver: ";
    cin >> N;

    int contador = 0;

    if (N < 0){

        cout << "Numero invalido, ingrese un digito positivo" << endl;
        
    }

    else if ( N == 0) {
        cout << "Ingrese un numero arriba de 0" << endl;
    }

    else {
    for (int num = 2; contador < N; num++) {

        bool esPrimo = true;

        for (int i = 2; i * i <= num; i++) {
            if (num % i == 0) {
                esPrimo = false;
            }                       
        }

        if (esPrimo) {
            cout << num << " ";
            contador++;
        }
    }
}

    return 0;
}
