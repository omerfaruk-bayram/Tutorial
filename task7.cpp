#include <iostream>
#include <vector>
#include <string>
#include <sstream>
#include <stdlib.h>

//

int main(int argc, char* argv[])
{
    int multiple = std::stoi(argv[1]), line = std::stoi(argv[2]);

    int coulumn = (argc-3) / line;

    double num;

    std::string str;

    std::vector<std::vector<double>> numArray ( line );

    std::vector<float> v;

    int k = 3; 

    for(int j = 0; j < coulumn; j++)
    {
        numArray[0].push_back(2 * std::stof(argv[k]));
        k++;
    }
    
    for(int i = 1; i < line; i++)
    {
        for(int j = 0; j < coulumn; j++)
        {
            numArray[i].push_back(std::stof(argv[k]));
            k++;          
        }
    }

    
    for(auto v1: numArray)
    {
        for(auto v2: v1)
        {
            std::cout << v2 << " ";
        }

        std::cout << std::endl;
    }
   
    return 0;
}