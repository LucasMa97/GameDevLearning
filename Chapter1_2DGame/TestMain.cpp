#include <iostream>
#include "Array2D.hpp"
#include "FileReader.hpp"

int main()
{
    FileReader myFile("my.txt");
    std::cout.write(myFile.GetTxt(), myFile.getSize());
}