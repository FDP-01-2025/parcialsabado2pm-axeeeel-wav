// Dado el número de horas trabajadas y el pago por hora, calcular el salario. Si trabaja más de 40 horas, pagar horas extra a 1.5 veces el pago normal.

#include <iostream>

using namespace std;

int main()
{
    int pagohora;
    int horastrabajadas;

    cout << "Bienvenido al programa, por favor ingrese su pago por hora" << endl;
    cin >> pagohora;

    cout << "Para continuar, ingrese tambien sus horas trabajadas" << endl;
    cin >> horastrabajadas;

    float salario;

    if (horastrabajadas > 40)
    {
        int horasextra = horastrabajadas - 40;
        salario = (40 * pagohora) + (horasextra * pagohora * 1.5);
    }
    else
    {
        salario = horastrabajadas * pagohora;
    }

    cout << "Su salario total es: " << salario << endl;

    return 0;
}
