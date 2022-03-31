#include <iostream>
#include <vector>

template <typename T>
std::vector<std::vector<T>> create_matrix(T x, int rows, int cols) 
{
    std::vector<std::vector<T>> v;

    std::vector<T> vRowExample (cols, x); 

    for(int i = 0; i < rows; i++)
    {
        v.push_back(vRowExample);
    }

    return v;
}



int main()
{
    int rows = 5; int cols = 7;
    std::vector<std::vector<int>> v = create_matrix(6, rows, cols);

    for(int i = 0; i < rows; i++)
    {
        for(int j = 0; j < cols; j++)
        {
            std::cout << v[i][j] << " ";
        }
        std::cout << "\n";
    }

    return 0;
}