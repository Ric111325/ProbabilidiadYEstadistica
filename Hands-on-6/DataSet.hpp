#ifndef DATASET_HPP
#define DATASET_HPP

class DataSet {
private:
    int tabla[2][2];

public:
    DataSet();

    float cell(int fila, int columna);

    float total();

    float totalFila(int fila);

    float totalColumna(int columna);

    void printDataset();
};

#endif