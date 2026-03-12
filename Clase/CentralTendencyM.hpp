

#include "Dataset.hpp"


class CentralTendencyM{

private:
    DataSet*dataset;


public:
    #define MEAN (sum,n) ((double)(sum)/(n))

    CentralTendencyM(DataSet*d);

    double mean();
    double median();
    int mode ();
};

#endif