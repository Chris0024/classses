#include "Vector.h"
#include <iostream>
#include <cmath>
using namespace std;
Vector::Vector()
{

}
void Vector::imprimir(){
    inicial.imprimir();
    cout <<" -> ";
    fin.imprimir();
}
void Vector::modificarPuntoInicial(double nx,double ny){
    inicial.x = nx;
    inicial.y = ny;
}
void Vector::modificarPuntoFinal(double nx,double ny){
    fin.x = nx;
    fin.y = ny;
}
double Vector::modulo(){
    result.x = fin.x-inicial.x;
    result.y = fin.y-inicial.y;
    return (sqrt(pow(result.x,2)+pow(result.y,2)));
}

