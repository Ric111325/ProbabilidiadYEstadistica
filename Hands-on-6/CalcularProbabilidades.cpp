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

    cout << "\nMarginal Columna: " << marginalColumna(data, 0);
    cout << "\nMarginal Fila: " << marginalFila(data, 0);
    cout << "\nConjunta: " << conjunta(data, 0, 0);
    cout << "\nCondicional: " << condicional(data, 0, 0);
    cout << endl;
}