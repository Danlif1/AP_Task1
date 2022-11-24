#include <iostream>
#include <vector>
#include "GetVector.h"
#include "CalcDist.h"
/**
 * @brief The main function.
 */
int main(int argc, char **argv) {
    std::vector<int> point1;
    std::vector<int> point2;
    InputToVector(point1);
    InputToVector(point2);
    PrintDist(point1,point2,2);
}