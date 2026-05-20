#include "CalcularProbabilidades.hpp"
#include <iostream>

using namespace std;

Calcular::Calcular(DataSet a) {
    dataset = a;
}

float Calcular::marginalA() {

    return dataset.totalColumna(0) / dataset.total();
}

float Calcular::marginalB() {

    return dataset.totalFila(0) / dataset.total();
}

float Calcular::conjuntaAB() {

    return dataset.cell(0,0) / dataset.total();
}

float Calcular::condicionalBA() {

    return dataset.cell(0,0) / dataset.totalColumna(0);
}

void Calcular::printResults() {

    cout << "\n--------------";
    cout << "\nProbabilidades\n";
    cout << "\nP(A): " << marginalA();
    cout << "\nP(B): " << marginalB();
    cout << "\nP(A n B): " << conjuntaAB();
    cout << "\nP(B|A): " << condicionalBA();
    cout << endl;
}