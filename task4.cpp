#include <iostream>

struct Province;

struct Country
{
    std::string name;
    Province* capital;
};

struct Province
{
    std::string name;
    Country* domain;
};


int main() {

    Province Ist = {"İstanbul"};
    Province Ankara = {"Ankara"};

    Country Turkey = {"Turkey", &Ankara};

    Ist.domain = &Turkey;
    Ankara.domain = &Turkey;

    std::cout << Ist.domain->capital->name;

    return 0;
}