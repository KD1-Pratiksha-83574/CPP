// Q1. Write a class to find volume of a Cylinder by using following members. (volume of
// Cylinder=3.14 * radius * radius *height) ( use static wherever needed. hint-PI)
// Class having following member functions:
// Cylinder()
// Cylinder(double radius, double height)
// getRadius()
// setRadius()
// getHeight()
// setHeight()
// getVolume()
// printVolume()
// Initialize members using constructor member initializer list.

#include<iostream>
using namespace std;

class Cylinder
{
    private :
        double radius;
        double height;
        static const double PI;

    
    public :
        Cylinder()
        {
            
        };
        Cylinder(double radius, double height)
        {
            this -> radius = radius;
            this -> height = height;

        }

        double getRadius()
        {
            return radius;
        }

        void setRadius(double radius)
        {
            this -> radius = radius;
        }

        double getHeight()
        {
            return height;
        }

        void setHeight(double height)
        {
            this -> height = height;
        }

        double getVolume()
        {
            return PI * radius * radius * height;
        }

        void printVolume()
        {
            cout << "Volume of Cylinder : " << getVolume() << endl;
        }
};

const double Cylinder :: PI = 3.14;

int main()
{
    Cylinder c1;
    c1.setRadius(3.0);
    c1.setHeight(5.0);
    c1.printVolume();

    // Cylinder c2(2.5, 7.0);
    c1.printVolume();

    return 0;
}