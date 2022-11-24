#include <iostream>
#include <vector>
#include "getVector.h"
#include "calcDist.h"
/**
 * @brief The main function.
 */
int main(int argc, char **argv) {
    std::vector<int> point1;
    std::vector<int> point2;
    InputToVector(point1);
    InputToVector(point2);
    PrintDist(point1,point2);
}