#include "DataSet.hpp"
#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

DataSet::DataSet() {
    
    // Datos randoms
    
    tabla[0][0] = rand() % 10 + 1;
    tabla[0][1] = rand() % 10 + 1;
    tabla[1][0] = rand() % 10 + 1;
    tabla[1][1] = rand() % 10 + 1;
    

    //Datos definidos
    /*
    tabla[0][0] = 7;
    tabla[0][1] = 3;

    tabla[1][0] = 2;
    tabla[1][1] = 6;
    */
}

float DataSet::cell(int fila, int columna) {
    return tabla[fila][columna];
}

float DataSet::total() {
    return tabla[0][0] + tabla[0][1] + tabla[1][0] + tabla[1][1] ;
}

float DataSet::totalColumna(int columna) {
    return tabla[0][columna] + tabla[1][columna];
}

float DataSet::totalFila(int fila){
    return tabla [fila][0] + tabla[fila][1];    
}

void DataSet::printDataset() {

   cout << "\nDataset:\n\n";

    cout << "\tA\tA'\tSumas\n";

    cout << "B\t" << tabla[0][0] << "\t" << tabla[0][1] << "\t" << totalFila(0) << endl;

    cout << "B'\t" << tabla[1][0] << "\t" << tabla[1][1] << "\t" << totalFila(1) << endl;

    cout << "Sumas\t"
         << totalColumna(0) << "\t" << totalColumna(1) << "\t" << total() << endl;
}