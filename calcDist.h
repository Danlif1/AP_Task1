#ifndef T1_calcDist_HPP
#define T1_calcDist_HPP
#include <iostream>
#include <vector>
#include <string>
#include <math.h>
double Euclidian(std::vector<int>, std::vector<int>);
double Manhattan(std::vector<int>, std::vector<int>);
double Chev(std::vector<int>, std::vector<int>);
double Canberra(std::vector<int>, std::vector<int>);
double Minkowski(std::vector<int>, std::vector<int>, int);
char* doubleFormat(double);
void PrintDist(std::vector<int>, std::vector<int>, int);
#endif //T1_calcDist_HPP
