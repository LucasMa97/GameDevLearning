#include <iostream>
#include "Array2D.hpp"
#include "FileReader.hpp"
#include "Flag.hpp"


int main()
{
    FileReader myFile("my.txt");
    std::cout.write(myFile.GetTxt(), myFile.getSize());

    Array2D<int> myArray(10, 10);
    myArray(1,1) = 0;
    std::cout << myArray(1,1) << std::endl;

    BitFlag manState(WORKING | SLEEPY);
    std::cout << std::hex << manState.Get();
}