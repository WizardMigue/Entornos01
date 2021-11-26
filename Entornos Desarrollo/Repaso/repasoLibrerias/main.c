#include <stdio.h>
#include "areas.h"

int main(int argc, char const *argv[]){
    float lado;
    float altura;
    float base;
    float apotema;
    float perimetro;

    float Cuadrado = cuadrado(3);
    printf("El area del cuadrado del lado 3 es %0.2f \n", Cuadrado);
    float Rectangulo = rectangulo(6,8);
    printf("El area del rectangulo de base 6 y altura 8 es %0.2f \n", Rectangulo);
    float Triangulo = triangulo(4,3);
    printf("El area del triangulo de base 4 y altura 3 es %0.2f \n", Triangulo);
    float Poligono = poligono(25,3);
    printf("El area del poligono regular es %0.2f \n", Poligono);
}