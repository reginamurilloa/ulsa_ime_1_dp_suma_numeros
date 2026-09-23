// ¿Recuerdas qué hace iostream?
#include <iostream>

// ¿por qué debe existir la función main()?
int main() {
    // 1. Constante: valor que no cambia durante la ejecución
    const int CANTIDAD = 5;
    int contador = 0;

    // 2. Variables (siempre inicializadas)
    double suma   = 0.0;
    double numero = 0.0;

    // 3. Ciclo: repetir CANTIDAD veces
    while (contador < 5) {
        std::cout << "Ingrese un numero " << std::endl;
        std::cin >> numero;

        if(numero >= 0) {
            suma += numero;
            contador++;
        }else{
            std::cout << "numero no valido";
        }
     }
     std::cout << "Suma de " << CANTIDAD << " numeros\n";
     // 3. Ciclo: repetir CANTIDAD veces
    //    TODO: elige un ciclo (for o while) y usa un contador
    //    TODO: pedir el numero, leerlo y acumularlo en suma

    // 4. Salida
    std::cout << "Suma: " << suma;

    // ¿Qué significa return 0;?
    return 0;
}