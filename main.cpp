// ¿Recuerdas qué hace iostream?
#include <iostream>
using namespace std;

// ¿por qué debe existir la función main()?
int main() {
    // 1. Constante: valor que no cambia durante la ejecución
    const int CANTIDAD = 5;
    int contador = 0;
    
    // 2. Variables (siempre inicializadas)
    double suma   = 0.0;
    double numero = 0.0;
        while (contador <=5) {
        std::cout << "Ingrese un numero: "<< endl;
        std::cin >> numero;
        if(isdigit(numero)){
        suma += numero;
        contador++;
        }else {
            cout << "El valor ingresado no es un numero" << endl;

        suma += numero;
        contador++;
    }

    std::cout << "Suma de " << contador << " numeros\n";

    // 3. Ciclo: repetir CANTIDAD veces
    //    TODO: elige un ciclo (for o while) y usa un contador
    //    TODO: pedir el numero, leerlo y acumularlo en suma

    // 4. Salida
    //    TODO: mostrar el total

    // ¿Qué significa return 0;? Que todo salió bien
    return 0;
}