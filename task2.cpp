#include <iostream>
#include <clocale> // veya C++ için <clocale>
#include <vector>



double mean(std::vector<double> data)
{
    double total = 0;
    for(double d: data)
    {
        total += d;
    }

    return total / data.size();
};

double stddev(std::vector<double> data)
{
    double u = 0, o = 0;
    for(double d: data)
    {
        u+= d;
    }
    u = u / data.size();

    for(double d: data)
    {
        o += (d-u) * (d-u);
    }

    o = o / data.size();

    return o;
};

int main() {

    setlocale(LC_ALL, "Turkish");
    printf("Türkçe karakter yazdırmak için örnek kod\n");

    int num, digits[3];   
    
    std::cin >>num;

    if(num > 99)
    {
        digits[0] = num % 10;
        num = num / 10;
        digits[1] = num % 10;
        num = num / 10;
        digits[2] = num % 10;
    }
    else if(num > 9)
    {
        digits[0] = num % 10;
        num = num / 10;
        digits[1] = num % 10;
    }
    else
    {
        digits[0] = num % 10;
    }


    if(digits[2])
    switch(digits[2])
    {
        case 1:
            std::cout << "yüz ";
            break;
        case 2:
            std::cout << "iki yüz ";
            break;
        case 3:
            std::cout << "üç yüz ";
            break;
        case 4:
            std::cout << "dört yüz ";
            break;
        case 5:
            std::cout << "beş yüz ";
            break;
        case 6:
            std::cout << "altı yüz ";
            break;
        case 7:
            std::cout << "yedi yüz ";
            break;
        case 8:
            std::cout << "sekiz yüz ";
            break;
        case 9:
            std::cout << "dokuz yüz ";
            break;
    }



    if(digits[1])
    switch(digits[1])
    {
        case 1:
            std::cout << "on ";
            break;
        case 2:
            std::cout << "yirmi ";
            break;
        case 3:
            std::cout << "otuz ";
            break;
        case 4:
            std::cout << "kırk ";
            break;
        case 5:
            std::cout << "elli ";
            break;
        case 6:
            std::cout << "altmış ";
            break;
        case 7:
            std::cout << "yetmiş ";
            break;
        case 8:
            std::cout << "seksen ";
            break;
        case 9:
            std::cout << "doksan ";
            break;
    }

    if(digits[0])
    switch(digits[0])
    {
        case 1:
            std::cout << "bir";
            break;
        case 2:
            std::cout << "iki";
            break;
        case 3:
            std::cout << "üç";
            break;
        case 4:
            std::cout << "dört";
            break;
        case 5:
            std::cout << "beş";
            break;
        case 6:
            std::cout << "altı";
            break;
        case 7:
            std::cout << "yedi";
            break;
        case 8:
            std::cout << "sekiz";
            break;
        case 9:
            std::cout << "dokuz";
            break;
    }


  return 0;
}