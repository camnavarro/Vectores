//
//  main.cpp
//  vectores
//
//  Created by Camilo Navarro on 9/3/19.
//  Copyright © 2019 Camilo Navarro. All rights reserved.
//

#include <iostream>
using namespace std;

//FIRMAS//
void leerVec(int[], int);
int bmayor(int[], int);
float promedio(int[], int);
int buscar (int[], int, int);

//MAIN//
int main() {
    int tam=10, mayor, n, pos;
    int vector[tam];
    float prom;

    leerVec(vector,tam);
    mayor = bmayor(vector, tam);
    cout << endl;
    cout << "El mayor de los numeros del arreglo es: "<< mayor << endl;
    cout << endl;
    prom = promedio(vector, tam);
    cout << "El promedio de los numeros del arreglo es: "<< prom << endl;
    cout << endl;
    cout << "Teclee el numero que desea buscar" << endl;
    cin>> n;
    cout << endl;
    pos = buscar(vector, tam, n);
    if (pos != -1)
            cout << "El elemento esta en la posicion: "<< pos << endl;
    else
            cout << "El elemento no esta en el arreglo: "<< mayor << endl;
            

    return 0;
}

//FUNCION LEER//
void leerVec(int v[], int tam)
{
    for (int i=0; i<tam; i++)
    {
        cout << "Teclee el elemento " << i << " del arreglo" << endl;
        cin >> v[i];
    }
}

//FUNCION BUSCAR MAYOR//

int bmayor(int v[], int t)
{
    int mayor = 0;
    for(int i=0; i<t; i++)
        if(mayor < v[i])
            mayor = v[i];
    
    return mayor;
}

//FUNCION BUSCAR PROMEDIO//
float promedio(int v[], int t)
{
    float prom;
    float suma = 0;
    for (int i=0; i<t; i++)
        suma = suma + v[i];
    
    prom = suma/t;
    
    return prom;
}

//FUNCION BUSCAR//
int buscar(int v[], int t, int n)
{
    for(int i=0; i<t; i++)
        if( n== v[i])
            return i;
    return -1;
}

