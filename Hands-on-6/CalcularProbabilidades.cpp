#include "CalcularProbabilidades.hpp"
#include <iostream>

using namespace std;

float Calcular::marginalFila(DataSet& data, int fila) {
    return (float)data.sumaFila(fila) / data.Total();
}

float Calcular::marginalColumna(DataSet& data, int columna) {
    return (float)data.sumaColumna(columna) / data.Total();
}

float Calcular::conjunta(DataSet& data, int fila, int columna) {
    return (float)data.celda(fila, columna) / data.Total();
}

float Calcular::condicional(DataSet& data, int fila, int columna) {
    float denom = data.sumaColumna(columna);
    if (denom == 0) return 0;
    return (float)data.celda(fila, columna) / denom;
}

void Calcular::printResults(DataSet& data) {
    cout << "\n--------------";
    cout << "\nProbabilidades\n";

    cout << "\nMarginal Columna 1: " << marginalColumna(data, 0);
    cout << "\nMarginal Columna 2: " << marginalColumna(data, 1);
    cout << "\nMarginal Fila 1: " << marginalFila(data, 0);
    cout << "\nMarginal Fila 2: " << marginalFila(data, 1);
    cout << endl;
    cout << "\nConjunta (0,0): " << conjunta(data, 0, 0);
    cout << "\nConjunta (0,1): " << conjunta(data, 0, 1);
    cout << "\nConjunta (1,0): " << conjunta(data, 1, 0);
    cout << "\nConjunta (1,1): " << conjunta(data, 1, 1);
    cout << endl;
    cout << "\nCondicional (0,0): " << condicional(data, 0, 0);
    cout << "\nCondicional (0,1): " << condicional(data, 0, 1);
    cout << "\nCondicional (1,0): " << condicional(data, 1, 0);
    cout << "\nCondicional (1,1):  " << condicional(data, 1, 1);
    cout << endl;
}