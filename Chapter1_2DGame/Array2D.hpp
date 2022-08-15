#ifndef ARRAY_2D
#define ARRAY_2D

template <typename T>
class Array2D
{
public:
Array2D(int x, int y) : m_array(0), rowNum(x), colNum(y) 
{
    m_array = new T[x * y];
}

~Array2D()
{
    delete[] m_array;
    m_array = 0;
}

T& operator()(int x, int y)
{
    return m_array[x][y];
}

T operator()(int x, int y) const
{
    return m_array[x][y];
}

private:
    T *m_array;
    int rowNum;
    int colNum;
};

#endif