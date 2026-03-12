#include "DataSet.hpp"

DataSet::DataSet (){
    
    size = 5;
    data = new int [size];

    data[0] = 4;
    data[1] = 7;



}

DataSet::~DataSet(){
    delete [] data;
}

int* DataSet::getData(){
    return data;
}

int DataSet::getSize(){
    return size;
}