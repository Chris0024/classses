#include <iostream>
#include <cmath>
#include "Punto.h"
#include "Vector.h"

using namespace std;
int main()
{
    Vector r;

    r.modificarPuntoFinal(3,4);
    r.imprimir();
    cout<<endl;
    cout<<r.modulo();
    return 0;
}
