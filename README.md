# Práctica 1: Suma de 5 números
## 1. Descripción del problema (Fase 1)
<!-- Explica con tus palabras qué hace tu programa y para qué serviría en la vida real. Máximo 4 líneas. --> 
En el programa se busca que la suma de los números se pueda ejecutar de manera más facil, sin tener tanta complejidad, esto serviria para hacer calculos de maneras más rapida cuando sean aporaciones grandes



## 2. Entradas y salidas (Fase 1)
<!-- Define cada entrada y cada salida, con su tipo de dato y su objetivo. -->

**Entradas:**
1. 
¿Qué operación quieres realizar? (suma)
¿Qué números deseas sumar?


**Salidas:**
1. 
Resultado de los números sumados 

## 3. Restricciones e invariante (Fase 1 y 2)

**Restricciones** (¿qué debe cumplirse?): 
- Sean 5 valores a sumar
- No números romanos

**Decisión sobre negativos y decimales** (¿los acepto? ¿por qué?):
si, implementar los decimales para tener mayor experiencia en el codigo, sin embargo los negativos no

**Invariante** (¿qué es verdad después de cada vuelta del ciclo?):
Que el valor que sale al final es la suma de los terminos anteriores 

## 4. Casos resueltos a mano (Fase 1)

| Caso | Números | Suma calculada a mano |
|---|---|---|
| 1 | 4 | 4 | 
| 2 | 32 | 36 |  
| 3 | 45 | 81 |  

## 5. Receta en pseudocódigo (Fase 2)
<!-- Tu receta va en el archivo RECETA.md. Aquí solo responde las dos preguntas. -->

**¿Probé mi receta a mano con un caso?** Sí 
**¿Tuve que corregirla?** si, agustando la parte del contador, para que me diera 

## 6. Cómo compilar y ejecutar (Fase 3)

```bash
g++ -Wall -Wextra -std=c++17 main.cpp -o suma
./suma
```

## 7. Ejemplo de ejecución (Fase 3)
<!-- Pega aquí lo que muestra tu programa en pantalla con un caso normal. -->
regina_mua@MacBook-Air-de-Regina-2 ulsa_ime_1_dp_suma_numeros % g++ -Wall -Wextra -std=c++17 main.cpp -o suma
regina_mua@MacBook-Air-de-Regina-2 ulsa_ime_1_dp_suma_numeros % ./suma
Ingrese un numero 1: 3
Ingrese un numero 2: 12
Ingrese un numero 3: 10
Ingrese un numero 4: 2
Ingrese un numero 5: 8
La suma de los 5 numeros es: 35 


## 8. Experimentos (Fase 3)

**Experimento A: ¿qué pasó al no inicializar `suma`?**
Te de la suma como si fuera un porcentaje al finalizar

regina_mua@MacBook-Air-de-Regina-2 ulsa_ime_1_dp_suma_numeros % g++ -Wall -Wextra -std=c++17 main.cpp -o suma
regina_mua@MacBook-Air-de-Regina-2 ulsa_ime_1_dp_suma_numeros % ./suma
Ingrese un numero 
4
Ingrese un numero 
5
Ingrese un numero 
6
Ingrese un numero 
7
Ingrese un numero 
8
Suma de 5 numeros
Suma: 30% 




## 9. Tabla de pruebas (Fase 4)

| Caso | Números | Esperado | Obtenido | ¿Pasó? |
|---|---|---|---|---|
| Del 1 al 5 | 1 a 5 | 15 | 15 | Me dio el valor correcto |
| Todos ceros | 0 ×5 | 0 | 0 | Me dio el resultado correcto |
| Con negativos | -1 a -5 | -15 | numero no valido | no me deja ingresar valores negativos, ya que estamos realizando sumas |
| Decimales | 0.5 ×5 | 2.5 | 2.5 | Me dio el resultado correcto |
| Todos iguales | 7 ×5 | 35 | 35 | Me dio el resultado correcto |
| Caso propio 1 | 10 al 14 | 60 | 60 | Me dio resultado correcto de la suma |
| Caso propio 2 | 2,3,4,5.5,6 | 20.5 | 20.5 | sumo de manera adecuada numeros enteros y decimales |

## 10. Bitácora de mejoras (Fase 4)

| # | ¿Qué falló o qué quise mejorar? | ¿Qué cambié? | ¿Funcionó? |
| 1 |  cout << "Ingrese un numero " |  std::cout << "Ingrese un numero "  | si funciono de manera adecueda |
| 2 | }else{ | la manera de acomodarlo en el codigo, ya que no me dejaba avanzar y me marcaba mucho errores | si |



## 11. Dudas para el profesor (Fase 3)

| Duda | Lo que ya intenté |
| Como modifico el codigo para que tambien acepte numeros negativos | lo intente modificar en esta parte 
 if(numero >= 0) {
            suma += numero;
            contador++;
        }else{
            std::cout << "numero no valido"; 

Sin embargo no supe como modificar para que si acepte negativos|



## 12. Reflexión final

**¿Qué aprendí con esta práctica?**
Lo importante que es primero desarrollar lo que vas a hacer y luego crear el codigo, siguiendo los pasos 

**Ahora que terminé, ¿qué cambiaría de mi proceso?**
prestar más atención a los detalles y analizar bien que es lo que quiero hacer para crear el codigo

**¿Qué fue lo más difícil y cómo lo resolví?**
main.cpp 
ejecutar el codigo, lo resolvi con ayuda del documento que el profe nos dejo, con trabajos anteriores y explicación en clase de como ejecutar el trabajo 

**¿Qué pregunta me quedó sin responder?**
ninguna

## 13. Lista de verificación antes de entregar (Fase 5)

- [ ] Llené todas las secciones (no quedan `_____`)
- [ ] Mi programa compila sin advertencias
- [ ] Probé todos los casos de la tabla
- [ ] Hice al menos 3 commits con mensajes claros
- [ ] Hice `git push` y verifiqué mi fork en GitHub
- [ ] Entregué el enlace de mi fork en Classroom