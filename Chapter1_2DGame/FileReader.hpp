#ifndef FILE_READER
#define FILE_READER

#include <ifstream>

class FileReader
{
public:
FileReader(const char* name)
{
    inputFile = new ifstream(name, ifstream::binary);
    inputFile.seekg(0, ifstream::end);
    size = inputFile.tellg();
    inputFile.seekg(0, ifstream::beg);
}
~FileReader()
{
    delete inputFile;
    size = 0;
}
int getSize() const
{
    return size;
}
void ReadTo(char *target)
{
    inputFile.read(target, size);
}
private:
    ifstream *inputFile;
    int size;
};

#endif