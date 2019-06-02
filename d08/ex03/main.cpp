
#include "Operator.hpp"

#include <iostream>
#include <iomanip>
#include <fstream>

#include "BrainFuck.hpp"

int main( void )
{
    std::ifstream inFile;

    inFile.open("test.txt");
    if (!inFile)
    {
        std::cout << "Unable to open file";
        return(1);
    }
    std::string input;
    std::getline(inFile, input);



    BrainFuck br;



    br.read(input);

    inFile.close();
    return 0;
}