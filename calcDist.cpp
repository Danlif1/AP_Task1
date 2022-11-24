#include "calcDist.h"
double Euclidian(std::vector<int> Point1, std::vector<int> Point2){
    return Minkowski(Point1,Point2,2);
}

double Manhattan(std::vector<int> Point1, std::vector<int> Point2){
    return Minkowski(Point1,Point2,1);
}

double Chev(std::vector<int> Point1, std::vector<int> Point2){
    double result = 0;
    for (int i = 0; i < Point1.size(); i++){
        if (result < abs(Point1[i] - Point2[i])){
            result = abs(Point1[i] - Point2[i]);
        }
    }
    return result;
}

double Canberra(std::vector<int> Point1, std::vector<int> Point2){
    double result = 0;
    for (int i = 0; i < Point1.size(); i++){
        result += abs(Point1[i] - Point2[i])/(abs(Point1[i])+abs(Point2[i]));
    }
    return result;
}

double Minkowski(std::vector<int> Point1, std::vector<int> Point2, int power){
    double result = 0;
    for (int i = 0; i < Point1.size(); i++){
        result += pow(abs(Point1[i] - Point2[i]),power);
    }
    result = pow(result, 1/power);
    return result;
}

void PrintDist(std::vector<int> point1, std::vector<int> point2, int power = 2){
    std::cout << Euclidian(point1,point2) << std::endl;
    std::cout << Manhattan(point1,point2) << std::endl;
    std::cout << Chev(point1,point2) << std::endl;
    std::cout << Canberra(point1,point2) << std::endl;
    std::cout << Minkowski(point1,point2,power) << std::endl;

}