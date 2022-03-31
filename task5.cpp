#include <iostream>
#include <fstream>
#include <vector>
#include <string>


int main()
{
    std::ifstream afile;
    afile.open("A.txt");

    std::ifstream bfile;
    bfile.open("b.txt");

    std::string line;
    int numOfLines = 0, num = 0;
    


    if(bfile.is_open())
    {
        while(getline(bfile, line))
        {
            numOfLines++;
        }

        std::vector<int> vect;
        std::vector<int> vectorB;
        std::vector<std::vector<int>> vectorA;

        bfile.clear();
        bfile.seekg(0, std::ios::beg);

        while(getline(bfile, line))
        {

            vectorB.push_back(stoi(line)); 
             
        }

        for(int i = 0; i < numOfLines; i++)
        {
            for(int j = 0; j < numOfLines; j++)
            {
                afile >> line;
                vect.push_back(stoi(line));
            }

            vectorA.push_back(vect);

            vect.clear();
        }

        

    }
    //bfile.seekg(0, std::ios::beg);
    //getline(bfile, line);
    

    return 0;
}