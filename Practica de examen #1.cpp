#include <iostream>
#include <cmath>

using namespace std;

int main() {
	int lectura_anterior, lectura_actual, total_m2;
    double costo_total;
    const int costo_m2_1 = 200;
    const int costo_m2_2 = 250;
    const int limite = 300;

    cout << "Ingrese la lectura anterior del medidor: ";
    cin >> lectura_anterior;
    cout << "Ingrese la lectura actual del medidor: ";
    cin >> lectura_actual;

    total_m2 = abs (lectura_actual - lectura_anterior);

    if (total_m2 <= limite) {
        costo_total = total_m2 * costo_m2_1;
    } else {
        costo_total = limite * costo_m2_1 + (total_m2 - limite) * costo_m2_2;
    }

    cout << "Total de m2 consumidos: " << total_m2 << endl;
    cout << "Monto total del recibo: " << costo_total << " Colones" << endl;

    return 0;
}
