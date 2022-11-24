#include <iostream>
#include <vector>
#include <string>
#include <sstream>

/*
 Taken from: https://java2blog.com/split-string-space-cpp/ and changed to suit the code
 */

/**
 * @brief A function that gets a string and creates a vector of ints from it.
 * 
 * @param str The string we want to cut.
 * @param delim The thing we want to cut by. (space in this instance)
 * @param out The vector we want to add the cutted pieces to.
 */
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

/**
 * @brief Gets an address of an empty vector and reads a line from the user and send both of them to the next function.
 * 
 * @param vector An address of an empty vector.
 */
void InputToVector(std::vector<int> &vector){
    std::string input;
    std::getline(std::cin, input);
    
    tokenize_to_int(input, ' ', vector);
}