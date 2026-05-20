#ifndef CALCULARPROBABILIDADES_HPP
#define CALCULARPROBABILIDADES_HPP

#include "DataSet.hpp"

class Calcular {

private:
    DataSet dataset;

public:
    Calcular(DataSet a);

    float marginalA();

    float marginalB();

    float conjuntaAB();

    float condicionalBA();

    void printResults();
};

#endif