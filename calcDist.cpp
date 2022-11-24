#include "calcDist.h"

/**
 * @brief Calculating the distance of two vectors using Euclidian distance.
 * Actually just calling Minkowski with 2 as it does the same thing.
 * 
 * @param point1 First vector.
 * @param point2 Second vector.
 * @return double The distance between two vectors.
 */
double Euclidian(std::vector<int> point1, std::vector<int> point2){
    return Minkowski(point1,point2,2);
}

/**
 * @brief Calculating the distance of two vectors using Manhattan distance.
 * Actually just calling Minkowski with 1 as it does the same thing.
 * 
 * @param point1 First vector.
 * @param point2 Second vector.
 * @return double The distance between two vectors.
 */
double Manhattan(std::vector<int> point1, std::vector<int> point2){
    return Minkowski(point1,point2,1);
}

/**
 * @brief Calculating the distance of two vectors using Chebyshev distance.
 * 
 * @param point1 First vector.
 * @param point2 Second vector.
 * @return double The distance between two vectors.
 */
double Chebyshev(std::vector<int> point1, std::vector<int> point2){
    double result = 0;
    for (int i = 0; i < point1.size(); i++){
        if (result < abs(point1[i] - point2[i])){
            result = abs(point1[i] - point2[i]);
        }
    }
    return result;
}

/**
 * @brief Calculating the distance of two vectors using Canberra distance.
 * 
 * @param point1 First vector.
 * @param point2 Second vector.
 * @return double The distance between two vectors.
 */
double Canberra(std::vector<int> point1, std::vector<int> point2){
    double result = 0;
    for (int i = 0; i < point1.size(); i++){
        result += abs(point1[i] - point2[i])/(abs(point1[i])+abs(point2[i]));
    }
    return result;
}

/**
 * @brief Calculating the distance of two vectors using Minkowski distance.
 * 
 * @param point1 First vector.
 * @param point2 Second vector.
 * @param power The power with which we use in the function as its (|p1[i]-p2[i]|)^p.
 * @return double The distance between two vectors.
 */
double Minkowski(std::vector<int> point1, std::vector<int> point2, int power){
    double result = 0;
    for (int i = 0; i < point1.size(); i++){
        result += pow(abs(point1[i] - point2[i]),power);
    }
    result = pow(result, 1/power);
    return result;
}

/**
 * @brief Printing all the distances.
 * The integer power is diffualt at 2 because in the test file its the same as Euclidian.
 * 
 * @param point1 First vecotr.
 * @param point2 Second vector.
 * @param power The power used in Minkowski distance.
 */
void PrintDist(std::vector<int> point1, std::vector<int> point2, int power = 2){
    std::cout << Euclidian(point1,point2) << std::endl;
    std::cout << Manhattan(point1,point2) << std::endl;
    std::cout << Chebyshev(point1,point2) << std::endl;
    std::cout << Canberra(point1,point2) << std::endl;
    std::cout << Minkowski(point1,point2,power) << std::endl;

}