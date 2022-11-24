#include <iostream>
#include <vector>
#include <string>
#include <sstream>
void tokenize_to_int(std::string const &str, const char delim,
            std::vector<int> &out)
{
    // construct a stream from the string
    std::stringstream ss(str);
 
    std::string s;
    while (std::getline(ss, s, delim)) {
        out.push_back(stoi(s));
    }
}

void InputToVector(std::vector<int> &vector){
    std::string input;
    std::getline(std::cin, input);
    
    tokenize_to_int(input, ' ', vector);
}