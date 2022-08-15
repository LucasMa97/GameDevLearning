#ifndef FILE_READER
#define FILE_READER

#include <fstream>
#include <iostream>

/* ifstream is not dynamic allocate, it seems wired to use new */
class FileReader
{
public:
FileReader(const char* name)
{
    inputFile = new std::ifstream(name, std::ifstream::binary);
    inputFile->seekg(0, std::ifstream::end);
    size = inputFile->tellg();
    inputFile->seekg(0, std::ifstream::beg);
}
~FileReader()
{
    delete inputFile;
    delete txt;
    size = 0;
}
int getSize() const
{
    return size;
}
char *GetTxt()
{
    txt = new char[size];
    inputFile->read(txt, size);
    return txt;
}
private:
    std::ifstream *inputFile;
    char *txt;
    int size;
};

#endif