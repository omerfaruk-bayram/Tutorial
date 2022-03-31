#include <iostream>
#include <cmath>
#define PI 3.14

class RegularPolygon
{
private:
    int n;
    double angle;
    

public:
    static int count;

    RegularPolygon(int side)
    {
        n = side;
        angle = PI / n;
        count++;
    }

    ~RegularPolygon()
    {
        count--;
    }

    int area(double sideLength)
    {
        double height = sideLength / (2.0 * tan(angle / 2));

        return n * sideLength * height / 2.0;
    }

    int length(double area)
    {
        int lengthSquare = 2 * area * tan(angle / 2) / n;

        return sqrt(lengthSquare);
    }

    static int getcount()
    {
        return count;
    }
    
};
int RegularPolygon::count = 0;

int main()
{
    RegularPolygon square(4);

    RegularPolygon triangle(3);

    std::cout << RegularPolygon::getcount();

    return 0;
}