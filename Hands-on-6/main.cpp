#include "CalcularProbabilidades.hpp"
#include <ctime>
#include <cstdlib> 

int main() {

    srand(time(0));

    DataSet a;
    Calcular b(a);

    a.printDataset();
    b.printResults();

    return 0;
}