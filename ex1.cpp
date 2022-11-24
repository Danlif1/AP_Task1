#include <iostream>
#include <vector>
#include "getVector.hpp"
/**
 * @brief The main function.
 */
int main(int argc, char **argv) {
    std::cout << "start\n";
    int x;
    std::cin >> x;
    std::vector<int> Point1;
    std::vector<int> Point2;
    InputToVector(Point1);
    InputToVector(Point2);
}