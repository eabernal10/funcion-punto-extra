#include <iostream>

using namespace std;

double factor(int num)
{
    double fac=1;
    for( int j=1; j <= num; j++ )
    {
        fac*=j;
    }
    return fac;
}

int potencia(int exponente, int base)
{
    int resul=1;
    for(int x=1; x<=exponente; x++)
    {
        resul= resul*base;
    }
    return resul;

}

double funcionfinal(int z)
{
    double suma=0
    for( int x =2; x<=z; x++ )
    {
        suma = suma + (factor (x) / potencia(5, x-1));
    }
    return suma;
}