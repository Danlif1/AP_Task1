# AP_Task1

**This project was made by Daniel Lifshitz.**

In this task we needed to create a code that can get 2 vectors of ints and print their distance in 5 diffrenet ways:
1) Euclidian distance
2) Manhattan distance
3) Chebyshev distance
4) Canberra distance
5) Minkowski distance

The way I did it was by creating 3 files.

**ex1 file**

The first file is called ex1 is the main file which runs the main function.

**Get Vector file**

The second file is GetVector this file handles the input and has two functions:

The first function gets the line of the vector (meaning it read the entire line and inputs it into a single string)

The second function cuts the line into different integers and puts them inside the vectors.

**Calc Dist file**

The third file is called CalcDist this file handles the calculation of the distances and the printing of those distances.

The file uses 7 functions:

5 functions calculating the 5 distances.

1 function formatting the results gotten from the 5 functions into a double with 16/1 numbers after the .

1 function prints the results gotten from the 5 distance functions after formatting them.
