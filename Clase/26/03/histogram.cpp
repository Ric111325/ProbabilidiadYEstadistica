#include "matplotlibcpp.h"
#include <vector>

namespace plt = matplotlibcpp;

int main(){

    std::vector<int> data = {1,2,2,3,3,3,4,4,5}:

    plt::hist(data, 5):
    plt::title("Histogram ");
    plt::show():

}